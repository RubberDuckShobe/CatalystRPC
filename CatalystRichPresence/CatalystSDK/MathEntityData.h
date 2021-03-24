//
// Generated with FrostbiteGen by Chod
// File: SDK\MathEntityData.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MathEntityData_H
#define FBGEN_MathEntityData_H

#include "Realm.h"
#include "MathEntityAssembly.h"
#include "EntityData.h"

class MathEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E72B0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	MathEntityAssembly m_Assembly; // 0x20
	bool m_WriteOnChanged; // 0x30
	bool m_EvaluateOnEvent; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_MathEntityData_H
