//
// Generated with FrostbiteGen by Chod
// File: SDK\EffectEntityData.h
// Created: Wed Mar 10 19:07:03 2021
//

#ifndef FBGEN_EffectEntityData_H
#define FBGEN_EffectEntityData_H

#include "Array.h"
#include "QualityScalableInt.h"
#include "QualityScalableFloat.h"
#include "QualityScalableBool.h"
#include "SpatialEntityData.h"

class EffectEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7940;
	}
	Array<GameObjectData*> m_Components; // 0x60
	QualityScalableInt m_MaxActiveInstanceCount; // 0x68
	QualityScalableFloat m_CullDistance; // 0x78
	float m_StartDelay; // 0x88
	bool m_KillWhenDistanceCulled; // 0x8c
	bool m_KillByWater; // 0x8d
	bool m_ResetInstanceWhenStarted; // 0x8e
	bool m_AttachToSpawnSurface; // 0x8f
	QualityScalableBool m_Enable; // 0x90
	bool m_OverrideDrawOrder; // 0x94
	bool m_UseLowFrequencyUpdate; // 0x95
	unsigned char _0x96[0xa];
}; // size = 0xa0

#endif // FBGEN_EffectEntityData_H
