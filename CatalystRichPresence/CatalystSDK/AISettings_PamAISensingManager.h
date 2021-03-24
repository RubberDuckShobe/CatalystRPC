//
// Generated with FrostbiteGen by Chod
// File: SDK\AISettings_PamAISensingManager.h
// Created: Wed Mar 10 19:08:56 2021
//

#ifndef FBGEN_AISettings_PamAISensingManager_H
#define FBGEN_AISettings_PamAISensingManager_H

#include "AISettingsBase.h"

class AISettings_PamAISensingManager :
	public AISettingsBase // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286ED10;
	}
	float m_RangeModifierFactor_Idle; // 0x20
	float m_RangeModifierFactor_Combat; // 0x24
}; // size = 0x28

#endif // FBGEN_AISettings_PamAISensingManager_H
