//
// Generated with FrostbiteGen by Chod
// File: SDK\SharedDataEntityData.h
// Created: Wed Mar 10 19:01:27 2021
//

#ifndef FBGEN_SharedDataEntityData_H
#define FBGEN_SharedDataEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class SharedDataEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1F00;
	}
	float m_FloatInput; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_TransformInput; // 0x20
	int m_IntInput; // 0x60
	bool m_BoolInput; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_SharedDataEntityData_H
