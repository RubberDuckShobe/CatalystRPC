//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectSystemComponent.h
// Created: Wed Mar 10 19:07:02 2021
//

#ifndef FBGEN_EffectSystemComponent_H
#define FBGEN_EffectSystemComponent_H

#include "EffectParameterList.h"
#include "SubWorldDataComponent.h"

class EffectSystemComponent :
	public SubWorldDataComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E8030;
	}
	EffectParameterList* m_EffectParameterList; // 0x10
}; // size = 0x18

#endif // FBGEN_EffectSystemComponent_H
