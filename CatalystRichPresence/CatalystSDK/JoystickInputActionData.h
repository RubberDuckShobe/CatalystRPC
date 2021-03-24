//
// Generated with FrostbiteGen by Chod
// File: SDK\JoystickInputActionData.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JoystickInputActionData_H
#define FBGEN_JoystickInputActionData_H

#include "InputDevicePadButtons.h"
#include "AxesInputActionData.h"

class JoystickInputActionData :
	public AxesInputActionData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FD80;
	}
	InputDevicePadButtons m_Button; // 0x20
	bool m_UseSquareInput; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_JoystickInputActionData_H
