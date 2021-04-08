#include "pa_rearmirror.h"

SharedMemory::Pool SharedMemoryPool_PA_RearMirror{ "PA_RearMirror", 65535 };

SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_ERMDAdjustmentEntrance_Grey(SharedMemoryPool_PA_RearMirror,		"PA_ERMD_ERMDAdjustmentEntrance_Grey",		{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_ERMDAdjustmentEntrance_Normal(SharedMemoryPool_PA_RearMirror,		"PA_ERMD_ERMDAdjustmentEntrance_Normal",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_ERMDAdjustmentEntrance_Highlight(SharedMemoryPool_PA_RearMirror,	"PA_ERMD_ERMDAdjustmentEntrance_Highlight",	{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Left_Normal(SharedMemoryPool_PA_RearMirror,						"PA_ERMD_Left_Normal",						{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Left_Highlight(SharedMemoryPool_PA_RearMirror,					"PA_ERMD_Left_Highlight",					{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Left_Grey(SharedMemoryPool_PA_RearMirror,							"PA_ERMD_Left_Grey",						{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Right_Normal(SharedMemoryPool_PA_RearMirror,						"PA_ERMD_Right_Normal",						{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Right_Highlight(SharedMemoryPool_PA_RearMirror,					"PA_ERMD_Right_Highlight",					{ 0, 0 });
SharedMemory::AtomicStruct<PA_Mirror> PA_ERMD_Right_Grey(SharedMemoryPool_PA_RearMirror,						"PA_ERMD_Right_Grey",						{ 0, 0 });
SharedMemory::AtomicNumber<unsigned char> PA_ExtrMirrAdjHmiReq(SharedMemoryPool_PA_RearMirror,					"PA_ExtrMirrAdjHmiReq",						{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_ExtrMirrSelnHmiReq(SharedMemoryPool_PA_RearMirror,					"PA_ExtrMirrSelnHmiReq",					{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_ExtrReViewMirrDispRstSetg(SharedMemoryPool_PA_RearMirror,			"PA_ExtrReViewMirrDispRstSetg",				{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_ExtrReViewMirrDispAdjHmiReq(SharedMemoryPool_PA_RearMirror,		"PA_ExtrReViewMirrDispAdjHmiReq",			{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_Enter_ERMD_Entrance(SharedMemoryPool_PA_RearMirror,				"PA_Enter_ERMD_Entrance",					{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_Select_ERMD_Entrance(SharedMemoryPool_PA_RearMirror,				"PA_Select_ERMD_Entrance",					{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_Enter_ERMD_Adjustment(SharedMemoryPool_PA_RearMirror,				"PA_Enter_ERMD_Adjustment",					{ 0 });
SharedMemory::AtomicNumber<unsigned char> PA_Select_ERMD_Adjustment(SharedMemoryPool_PA_RearMirror,				"PA_Select_ERMD_Adjustment",				{ 0 });
