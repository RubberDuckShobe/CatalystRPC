//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEntityData.h
// Created: Wed Mar 10 19:01:16 2021
//

#ifndef FBGEN_SoundEntityData_H
#define FBGEN_SoundEntityData_H

#include "SoundAsset.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "EntityData.h"

class SoundEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7C80;
	}
	SoundAsset* m_Sound; // 0x18
	LinearTransform m_Transform; // 0x20
	Vec3 m_TransformOffset; // 0x60
	Vec3 m_RotationOffset; // 0x70
	bool m_PlayOnCreation; // 0x80
	bool m_EnableOnCreation; // 0x81
	bool m_UseParentTransform; // 0x82
	unsigned char _0x83[0xd];
}; // size = 0x90

#endif // FBGEN_SoundEntityData_H
