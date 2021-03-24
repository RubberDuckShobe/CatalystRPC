//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectBlueprint.h
// Created: Wed Mar 10 19:07:03 2021
//

#ifndef FBGEN_EffectBlueprint_H
#define FBGEN_EffectBlueprint_H

#include "TimeDeltaType.h"
#include "ObjectBlueprint.h"

class EffectBlueprint :
	public ObjectBlueprint // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D79A0;
	}
	TimeDeltaType m_TimeDeltaType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_EffectBlueprint_H
