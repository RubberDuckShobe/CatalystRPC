//
// Generated with FrostbiteGen by Chod
// File: SDK\PamVoiceOverLocatorEntityData.h
// Created: Wed Mar 10 19:03:20 2021
//

#ifndef FBGEN_PamVoiceOverLocatorEntityData_H
#define FBGEN_PamVoiceOverLocatorEntityData_H

#include "Realm.h"
#include "EntityVoiceOverInfo.h"
#include "SpatialEntityData.h"

class PamVoiceOverLocatorEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D920;
	}
	Realm m_Realm; // 0x60
	unsigned char _0x64[0x4];
	EntityVoiceOverInfo* m_VoiceOverInfo; // 0x68
}; // size = 0x70

#endif // FBGEN_PamVoiceOverLocatorEntityData_H
