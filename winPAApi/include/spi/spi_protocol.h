#ifndef SPI_PROTOCOL_H
#define SPI_PROTOCOL_H

#include "common.h"

#define FRAME_LENGTH                3
#define FRAME_TOTAL_LEN             256 // (32*2^FRAME_LENGTH)
#define DOMAIN_MAX_LEN              250
#define PAYLOAD_MAX_LEN             242
#define FRAME_CRC_LEN               2
#define PAYLOAD_MAX_COUNT           16

typedef struct {
    /*
     * synchronization string to uniquely start the frame
     * value: 0x514D.
     */
    uint16_t FrameSync;
    /*
     * master increase the value for each frame.
     * init value: 0, wrapping around at 255.
     */
    uint8_t  FrameCounter;

#ifdef __LITTLEENDIAN__
    /*
     * length of the frame in power of 2 steps starting at 32.
     * length = 32 * 2 ^ FrameLength.
     * 256 bytes shall be indicated by a FrameLength of 3.
     */
    uint8_t  FrameLength            :3;

    uint8_t  Reserved               :1;

    /*
     * reserved, set to 1 mean the one side is busy, the other side begin to send empty frame.
     */
    uint8_t  LoadStatus             :2;

    /*
     * set to 1 mark the frame as an empty frame.
     */
    uint8_t  Ignore                 :1;

    /*
     * set to 1 as soon as the other side has synchronized itself to the stream.
     */
    uint8_t  Synced                 :1;
#else
    /*
	 * set to 1 as soon as the other side has synchronized itself to the stream.
	 */
	uint8_t  Synced                 :1;
	/*
	 * set to 1 mark the frame as an empty frame.
	 */
	uint8_t  Ignore                 :1;
	/*
	 * reserved, set to 1 mean the one side is busy, the other side begin to send empty frame.
	 */
	uint8_t  LoadStatus             :2;
	uint8_t  Reserved               :1;
	/*
	 * length of the frame in power of 2 steps starting at 32.
	 * length = 32 * 2 ^ FrameLength.
	 * 256 bytes shall be indicated by a FrameLength of 3.
	 */
	uint8_t  FrameLength            :3;
#endif

    /*
     * domain protocol, moreFollowingFlag of domain protocol means
     * there is another domain,
     */
    uint8_t  DataLinkSegment[DOMAIN_MAX_LEN];
    /*
     * calculate according the CCITT CRC-16 polynomial over frame length.
     * excluding the 2 byte CRC word.
     */
    uint16_t FrameCRC;
} __attribute__ ((packed)) DataLinkFrameType;

typedef struct {
#ifdef	__LITTLEENDIAN__

    uint8_t  Reserved1              :5;
    /*
     * FirstSegment LastSegment Description
     * 0            0           A middle segment of a multi segment message
     * 0            1           The last segment of a multi segment message
     * 1            0           The first segment of a multi segment message
     * 1            1           A single segment
     */
    uint8_t  LastSegment            :1;
    uint8_t  FirstSegment           :1;
    /*
     * Set to 1 to indicate that after this segment another segment can be
     * found in this frame.
     */
    uint8_t  MoreFollowing          :1;

	uint8_t  DomainId                ;

    uint8_t  Reserved2              :1;
    uint8_t  Priority               :2;
    /*
     * If set, the payload is encrypted.
     */
    uint8_t  Encrypted              :1;

    /*
     * payload length.
     */
    uint16_t Length                 :12;

#else
    /*
	 * Set to 1 to indicate that after this segment another segment can be
	 * found in this frame.
	 */
	uint8_t  MoreFollowing          :1;
	/*
	 * FirstSegment LastSegment Description
	 * 0            0           A middle segment of a multi segment message
	 * 0            1           The last segment of a multi segment message
	 * 1            0           The first segment of a multi segment message
	 * 1            1           A single segment
	 */
	uint8_t  FirstSegment           :1;
	uint8_t  LastSegment            :1;
	uint8_t  Reserved1              :5;
	uint8_t  DomainId                ;
	/*
	 * If set, the payload is encrypted.
	 */
	uint8_t  Encrypted              :1;
	uint8_t  Priority               :2;
	uint8_t  Reserved2              :1;
	/*
	 * payload length.
	 */
	uint16_t Length                 :12;
#endif
} __attribute__ ((packed)) DataLinkDomainTypeHeader;

typedef struct {
    DataLinkDomainTypeHeader  DomainTypeHeader;
    /*
     * totoal length of all payload.
     */
    uint32_t                TotalMessageLength;
} __attribute__ ((packed)) DataLinkDomainTypeHeader_Ex;

typedef struct
{
    /*
     * e2e crc provided by E2E protection.
     */
    uint8_t  E2ECrc  ;
    /*
     * e2e crc counter provided by E2E protection
     */
    uint8_t  E2ECounter;
    /*
     * time stamp.
     */
    uint32_t  Timestamp;
} __attribute__ ((packed)) DataLinkPayloadCrc;;


typedef struct {
    /*
     * payload message type.
     */
    uint8_t  MessageType;
    /*
     * this value is copied over to the CookieId of the command to the reply.
     */
    uint8_t  CookieId;
    /*
     * command identifier.
     */
	uint16_t  OpCode;
} __attribute__ ((packed)) DataLinkPayloadTypeHeader;

typedef struct
{
	uint8_t crc_status; //
    uint8_t crc_length; //
    uint16_t length; // payload data length
	uint8_t domain_id; // domain id
	DataLinkPayloadTypeHeader* payload_header;
    uint8_t * data;
} s_payload_internal;

typedef enum  {
    FRAME_VALID = 0,
    FRAME_HEADER_INVALID,
    FRAME_EMPTY_NO_SYNC,
    FRAME_EMPTY_SYNC,
    FRAME_CRC_ERROR,
    FRAME_COUNTER_ERROR,
    FRAME_INVALID
} E_FRAME_TYPE;

/**
 * Get the read buffer for spi_read.
 * @return : the pointer of the read buffer.
 */
uint8_t * get_read_buffer();

/**
 * Check the frame status after spi_read.
 * @return : the status of the frame.
 */
E_FRAME_TYPE check_frame();

/**
 * Unpack the frame if the frame valid.
 * @return : count of the valid payload in the frame.
 */
uint8_t unpack_frame();

/**
 * Get the payload.
 * @param: the index of the payload.
 * @return : the pointer to the payload.
 */
s_payload_internal* get_payload(uint8_t idx);

/**
 * Get the frame counter.
  * @return : the current frame counter.
 */
uint8_t get_frame_counter();

/**
 * Reset the frame counter into zero.
 */
void reset_frame_counter();

/**
 * Increase the frame counter.
 */
void increase_frame_counter();

/**
 * Decrease the frame counter.
 */
void decrease_frame_counter();

/**
 * Sync the frame counter.
 */
void sync_frame_counter();

/**
 * Get the write buffer for spi_write.
 * @return : the pointer of the write buffer.
 */
uint8_t * get_write_buffer();

/**
 * Generate empty frame with current counter.
 * @param: Set the sync state for the frame.
 */
void pack_empty_frame(uint8_t synced);

/**
 * Set the payload from midware module.
 * @param: pointer of the payload.
 */
void set_payload(s_payload_internal * payload);

/**
 * pack the payload into frame.
 * @return : 1 means frame which have valid data. 0 means pack empty frame
 */
uint8_t pack_frame();

/**
 * record frame.
 * @return : 1 means record successed. 0 means record failed
 */
void record_frame();

#endif
