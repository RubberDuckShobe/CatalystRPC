//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleDofParamConverterEntityData.h
// Created: Wed Mar 10 19:01:26 2021
//

#ifndef FBGEN_SimpleDofParamConverterEntityData_H
#define FBGEN_SimpleDofParamConverterEntityData_H

#include "EntityData.h"

class SimpleDofParamConverterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6BF0;
	}
	float m_FocusDistance; // 0x18
	float m_BlurFilterDeviation; // 0x1c
	float m_NearDistanceScale; // 0x20
	float m_FarDistanceScale; // 0x24
	float m_Scale; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_SimpleDofParamConverterEntityData_H
