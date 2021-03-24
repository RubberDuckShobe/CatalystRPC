//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatEaseFunctionEntityData.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FloatEaseFunctionEntityData_H
#define FBGEN_FloatEaseFunctionEntityData_H

#include "Realm.h"
#include "PropertyInterpolationType.h"
#include "PropertyInterpolationMode.h"
#include "EntityData.h"

class FloatEaseFunctionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D320;
	}
	Realm m_Realm; // 0x18
	PropertyInterpolationType m_InterpolationType; // 0x1c
	PropertyInterpolationMode m_InterpolationMode; // 0x20
	float m_InputRangeMin; // 0x24
	float m_InputRangeMax; // 0x28
	float m_OutputRangeMin; // 0x2c
	float m_OutputRangeMax; // 0x30
	float m_In; // 0x34
	bool m_ClampInput; // 0x38
	bool m_ClampOutput; // 0x39
	unsigned char _0x3a[0x6];
}; // size = 0x40

#endif // FBGEN_FloatEaseFunctionEntityData_H
