//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2LookAtConfiguration.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2LookAtConfiguration_H
#define FBGEN_PA2LookAtConfiguration_H

#include "Array.h"
#include "AntRef.h"
#include "SystemSettings.h"

class PA2LookAtConfiguration :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F7180;
	}
	Array<PA2LookAtGameStateSetting*> m_OnGameStates; // 0x20
	Array<PA2LookAtGameStateSetting*> m_OffGameStates; // 0x28
	AntRef m_ControllerGameState; // 0x30
	int m_DefaultOnController; // 0x44
	int m_OffController; // 0x48
	AntRef m_TargetGameState; // 0x4c
	AntRef m_SnapToTargetGameState; // 0x60
	unsigned char _0x74[0x4];
}; // size = 0x78

#endif // FBGEN_PA2LookAtConfiguration_H
