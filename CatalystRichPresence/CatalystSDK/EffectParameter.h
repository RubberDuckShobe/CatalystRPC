//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectParameter.h
// Created: Wed Mar 10 19:07:03 2021
//

#ifndef FBGEN_EffectParameter_H
#define FBGEN_EffectParameter_H

#include "EffectParameterType.h"
#include "EffectParameterScopeType.h"
#include "DataContainer.h"

class EffectParameter :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E80F0;
	}
	const char* m_Name; // 0x10
	EffectParameterType m_ParamType; // 0x18
	EffectParameterScopeType m_ParamScope; // 0x1c
}; // size = 0x20

#endif // FBGEN_EffectParameter_H
