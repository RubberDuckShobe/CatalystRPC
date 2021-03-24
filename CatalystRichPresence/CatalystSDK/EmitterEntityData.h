//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterEntityData.h
// Created: Wed Mar 10 19:07:01 2021
//

#ifndef FBGEN_EmitterEntityData_H
#define FBGEN_EmitterEntityData_H

#include "EmitterAsset.h"
#include "QualityScalableFloat.h"
#include "ChildEffectEntityData.h"

class EmitterEntityData :
	public ChildEffectEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DA8E0;
	}
	EmitterAsset* m_Emitter; // 0xa0
	QualityScalableFloat m_SpawnProbability; // 0xa8
	unsigned int m_MaxNearbyInstanceCount; // 0xb8
	float m_NearbyRadius; // 0xbc
	unsigned char m_DrawOrderSlot; // 0xc0
	bool m_LocalPlayerOnly; // 0xc1
	unsigned char _0xc2[0xe];
}; // size = 0xd0

#endif // FBGEN_EmitterEntityData_H
