//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterParamComponentData.h
// Created: Wed Mar 10 19:07:01 2021
//

#ifndef FBGEN_EmitterParamComponentData_H
#define FBGEN_EmitterParamComponentData_H

#include "Realm.h"
#include "EmitterParamOverride.h"
#include "VisualEnvironmentComponentData.h"

class EmitterParamComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846820;
	}
	Realm m_Realm; // 0x80
	EmitterParamOverride m_Parameter; // 0x84
	float m_Value; // 0x88
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_EmitterParamComponentData_H
