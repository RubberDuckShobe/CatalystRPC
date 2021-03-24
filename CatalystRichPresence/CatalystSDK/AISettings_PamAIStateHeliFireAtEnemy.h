//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAIStateHeliFireAtEnemy.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAIStateHeliFireAtEnemy_H
#define FBGEN_AISettings_PamAIStateHeliFireAtEnemy_H

#include "PamHeliWeaponType.h"
#include "AISettingsBase.h"

class AISettings_PamAIStateHeliFireAtEnemy :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E7D0;
	}
	PamHeliWeaponType m_WeaponType; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_AISettings_PamAIStateHeliFireAtEnemy_H
