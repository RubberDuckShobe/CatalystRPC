//
// Generated with FrostbiteGen by Chod
// File: SDK\KeyboardInputActionData.h
// Created: Wed Mar 10 19:06:23 2021
//

#ifndef FBGEN_KeyboardInputActionData_H
#define FBGEN_KeyboardInputActionData_H

#include "InputDeviceKeys.h"
#include "InputActionData.h"

class KeyboardInputActionData :
	public InputActionData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FC60;
	}
	InputDeviceKeys m_Key; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_KeyboardInputActionData_H
