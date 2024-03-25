#pragma once
#include <ntifs.h>
#include "driver_codes.h"

#define IOCTL_DRIVER_COPY_MEMORY ((ULONG)CTL_CODE(DRIVER_DEVICE_TYPE, 0x808, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS))

typedef struct _DRIVER_COPY_MEMORY {
	ULONGLONG Source;
	ULONGLONG Target;
	ULONGLONG Size;
	ULONG processID;
	BOOLEAN Write;
} DRIVER_COPY_MEMORY, *PDRIVER_COPY_MEMORY;