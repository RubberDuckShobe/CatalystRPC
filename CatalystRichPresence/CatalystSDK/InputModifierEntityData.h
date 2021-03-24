//
// Generated with FrostbiteGen by Chod
// File: SDK\InputModifierEntityData.h
// Created: Wed Mar 10 19:06:28 2021
//

#ifndef FBGEN_InputModifierEntityData_H
#define FBGEN_InputModifierEntityData_H

#include "EntityData.h"

class InputModifierEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280C1D0;
	}
	int m_Action; // 0x18
	float m_Offset; // 0x1c
	float m_Scale; // 0x20
	bool m_Enabled; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_InputModifierEntityData_H
