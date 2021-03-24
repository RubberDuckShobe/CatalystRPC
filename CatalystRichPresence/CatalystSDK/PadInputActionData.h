//
// Generated with FrostbiteGen by Chod
// File: SDK\PadInputActionData.h
// Created: Wed Mar 10 19:05:22 2021
//

#ifndef FBGEN_PadInputActionData_H
#define FBGEN_PadInputActionData_H

#include "InputDevicePadButtons.h"
#include "InputDevicePOVs.h"
#include "AxesInputActionData.h"

class PadInputActionData :
	public AxesInputActionData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FDE0;
	}
	InputDevicePadButtons m_Button; // 0x20
	InputDevicePadButtons m_PS3AlternativeButton; // 0x24
	InputDevicePOVs m_Pov; // 0x28
	bool m_UseSquareInput; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_PadInputActionData_H
