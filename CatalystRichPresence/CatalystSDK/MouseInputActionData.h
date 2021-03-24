//
// Generated with FrostbiteGen by Chod
// File: SDK\MouseInputActionData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MouseInputActionData_H
#define FBGEN_MouseInputActionData_H

#include "InputDeviceMouseButtons.h"
#include "AxesInputActionData.h"

class MouseInputActionData :
	public AxesInputActionData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FC00;
	}
	InputDeviceMouseButtons m_Button; // 0x20
	bool m_SimulateJoystickAxis; // 0x24
	bool m_RememberExcessInput; // 0x25
	bool m_ScaleScrollWheelAxisInput; // 0x26
	unsigned char _0x27[0x1];
}; // size = 0x28

#endif // FBGEN_MouseInputActionData_H
