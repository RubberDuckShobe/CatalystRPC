//
// Generated with FrostbiteGen by Chod
// File: SDK\JointValidationEntityData.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JointValidationEntityData_H
#define FBGEN_JointValidationEntityData_H

#include "Realm.h"
#include "EntityData.h"

class JointValidationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FAD0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_JointName; // 0x20
	float m_Joint_X; // 0x28
	float m_Joint_Y; // 0x2c
	float m_Joint_Z; // 0x30
	float m_Tolerance; // 0x34
	float m_Tick; // 0x38
	bool m_DisableValidation; // 0x3c
	unsigned char _0x3d[0x3];
}; // size = 0x40

#endif // FBGEN_JointValidationEntityData_H
