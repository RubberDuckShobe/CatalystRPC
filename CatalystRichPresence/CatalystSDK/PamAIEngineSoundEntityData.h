//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIEngineSoundEntityData.h
// Created: Wed Mar 10 19:05:20 2021
//

#ifndef FBGEN_PamAIEngineSoundEntityData_H
#define FBGEN_PamAIEngineSoundEntityData_H

#include "LinearTransform.h"
#include "SoundAsset.h"
#include "EntityData.h"

class PamAIEngineSoundEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872AC0;
	}
	float m_Throttle; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
	float m_RPM; // 0x60
	unsigned char _0x64[0x4];
	SoundAsset* m_SoundEffect; // 0x68
}; // size = 0x70

#endif // FBGEN_PamAIEngineSoundEntityData_H
