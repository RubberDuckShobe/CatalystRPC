//
// Generated with FrostbiteGen by Chod
// File: SDK\MessageInputActionData.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MessageInputActionData_H
#define FBGEN_MessageInputActionData_H

#include "InputDeviceMessageEvent.h"
#include "InputActionData.h"

class MessageInputActionData :
	public InputActionData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FBA0;
	}
	InputDeviceMessageEvent m_Command; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_MessageInputActionData_H
