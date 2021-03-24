//
// Generated with FrostbiteGen by Chod
// File: SDK\MotionControllerInputActionData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MotionControllerInputActionData_H
#define FBGEN_MotionControllerInputActionData_H

#include "InputDeviceMotionControllerButtons.h"
#include "AxesInputActionData.h"

class MotionControllerInputActionData :
	public AxesInputActionData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FD20;
	}
	InputDeviceMotionControllerButtons m_Button; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_MotionControllerInputActionData_H
