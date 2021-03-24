//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioRaycastCalculationEntityData.h
// Created: Wed Mar 10 19:08:35 2021
//

#ifndef FBGEN_AudioRaycastCalculationEntityData_H
#define FBGEN_AudioRaycastCalculationEntityData_H

#include "Array.h"
#include "EntityData.h"

class AudioRaycastCalculationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C4E0;
	}
	Array<RayCalculationProperties> m_InputRaysProperties; // 0x18
	unsigned int m_NumberOfAccumulationFrames; // 0x20
	unsigned int m_MaxIndoorinessModifierRayIndex; // 0x24
	Array<RayHitMaterials> m_OutputHitSoundMaterials; // 0x28
	float m_IndoorinessExponentiality; // 0x30
	float m_MaxIndoorinessModifierRayValue; // 0x34
	bool m_EnableMaxIndoorinessModifierRay; // 0x38
	bool m_ClampRaycastsAtMaxDistance; // 0x39
	bool m_ReturnMaxDistanceIfNoRaysHitting; // 0x3a
	bool m_ContinuousUpdate; // 0x3b
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_AudioRaycastCalculationEntityData_H
