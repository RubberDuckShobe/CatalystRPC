//
// Generated with FrostbiteGen by Chod
// File: SDK\ChildEffectEntityData.h
// Created: Wed Mar 10 19:08:13 2021
//

#ifndef FBGEN_ChildEffectEntityData_H
#define FBGEN_ChildEffectEntityData_H

#include "Array.h"
#include "QualityScalableInt.h"
#include "QualityScalableFloat.h"
#include "QualityScalableBool.h"
#include "SpatialEntityData.h"

class ChildEffectEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA140;
	}
	Array<GameObjectData*> m_Components; // 0x60
	QualityScalableInt m_MaxActiveInstanceCount; // 0x68
	QualityScalableFloat m_CullDistance; // 0x78
	float m_StartDelay; // 0x88
	bool m_KillWhenDistanceCulled; // 0x8c
	bool m_ResetInstanceWhenStarted; // 0x8d
	bool m_AttachToSpawnSurface; // 0x8e
	QualityScalableBool m_Enable; // 0x8f
	bool m_OverrideDrawOrder; // 0x93
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_ChildEffectEntityData_H
