//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterParamGlobalComponentData.h
// Created: Wed Mar 10 19:07:01 2021
//

#ifndef FBGEN_EmitterParamGlobalComponentData_H
#define FBGEN_EmitterParamGlobalComponentData_H

#include "Vec4.h"
#include "Realm.h"
#include "EffectParameter.h"
#include "VisualEnvironmentComponentData.h"

class EmitterParamGlobalComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428467C0;
	}
	Vec4 m_Value; // 0x80
	Realm m_Realm; // 0x90
	unsigned char _0x94[0x4];
	EffectParameter* m_Parameter; // 0x98
}; // size = 0xa0

#endif // FBGEN_EmitterParamGlobalComponentData_H
