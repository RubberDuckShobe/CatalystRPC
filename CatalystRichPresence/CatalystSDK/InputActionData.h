//
// Generated with FrostbiteGen by Chod
// File: SDK\InputActionData.h
// Created: Wed Mar 10 19:06:30 2021
//

#ifndef FBGEN_InputActionData_H
#define FBGEN_InputActionData_H

#include "DataContainer.h"

class InputActionData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810260;
	}
	bool m_IsAnalog; // 0x10
	bool m_NegateValue; // 0x11
	unsigned char _0x12[0x6];
}; // size = 0x18

#endif // FBGEN_InputActionData_H
