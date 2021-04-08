#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>
#include <stdio.h>
#define SPI_PROTOCOL_VERSION "0.1"

#ifdef SLOG2
#include <sys/slog2.h>
extern slog2_buffer_t              buffer_handle[1];
#define logger(lvl, fmt, args...) slog2f(buffer_handle[0], 0, lvl, fmt, ##args)

#else
#define logger(lvl, fmt, args...) printf(fmt, ##args)
#endif

#endif