//
// Generated with FrostbiteGen by Chod
// File: SDK\AxesInputActionData.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_AxesInputActionData_H
#define FBGEN_AxesInputActionData_H

#include "InputDeviceAxes.h"
#include "InputActionData.h"

class AxesInputActionData :
	public InputActionData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FE40;
	}
	InputDeviceAxes m_Axis; // 0x18
	bool m_NormalizeInput; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_AxesInputActionData_H
