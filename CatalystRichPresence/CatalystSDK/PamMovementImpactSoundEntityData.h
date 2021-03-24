//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMovementImpactSoundEntityData.h
// Created: Wed Mar 10 19:04:21 2021
//

#ifndef FBGEN_PamMovementImpactSoundEntityData_H
#define FBGEN_PamMovementImpactSoundEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PamMovementImpactSoundEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428853A0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<ImpactSoundData> m_SoundDatas; // 0x20
	float m_DefaultSoundMaterialId; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamMovementImpactSoundEntityData_H
