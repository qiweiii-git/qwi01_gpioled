//*****************************************************************************
// Qwi01Define.h
//
// This module is the global defines of Qwi01GpioLed project.
//
// Change History:
//  VER.   Author         DATE              Change Description
//  1.0    Qiwei Wu       Apr. 06, 2020     Initial Release
//*****************************************************************************

#ifndef QWI01_DEFINE
#define QWI01_DEFINE

//*****************************************************************************
// Includes
//*****************************************************************************
#include "xil_printf.h"
#include "xil_io.h"

//*****************************************************************************
// Defines
//*****************************************************************************
#define XRegRead32  Xil_In32
#define XRegWrite32 Xil_Out32

#define printf xil_printf
#define u32b u32

#endif
