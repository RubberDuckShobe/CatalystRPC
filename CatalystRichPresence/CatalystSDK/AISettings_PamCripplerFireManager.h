//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamCripplerFireManager.h
// Created: Wed Mar 10 19:08:55 2021
//

#ifndef FBGEN_AISettings_PamCripplerFireManager_H
#define FBGEN_AISettings_PamCripplerFireManager_H

#include "AISettingsBase.h"

class AISettings_PamCripplerFireManager :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EA10;
	}
	float m_WeaponDirectionTolerance; // 0x20
	float m_PrimaryHitDelay; // 0x24
	float m_WindupTime; // 0x28
	float m_SecondaryHitDelay; // 0x2c
}; // size = 0x30

#endif // FBGEN_AISettings_PamCripplerFireManager_H
