//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMovementImpactEffectEntityData.h
// Created: Wed Mar 10 19:04:21 2021
//

#ifndef FBGEN_PamMovementImpactEffectEntityData_H
#define FBGEN_PamMovementImpactEffectEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PamMovementImpactEffectEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885400;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<ImpactEffectData> m_EffectDatas; // 0x20
}; // size = 0x28

#endif // FBGEN_PamMovementImpactEffectEntityData_H
