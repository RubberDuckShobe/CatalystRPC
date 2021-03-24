//
// Generated with FrostbiteGen by Chod
// File: SDK\EngineComponentData.h
// Created: Wed Mar 10 19:07:00 2021
//

#ifndef FBGEN_EngineComponentData_H
#define FBGEN_EngineComponentData_H

#include "EngineConfigData.h"
#include "SoundAsset.h"
#include "GameComponentData.h"

class EngineComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E630;
	}
	EngineConfigData* m_Config; // 0x70
	SoundAsset* m_SoundEffect; // 0x78
	SoundAsset* m_SurfaceSoundEffect; // 0x80
	bool m_UseFirstPersonSounds; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_EngineComponentData_H
