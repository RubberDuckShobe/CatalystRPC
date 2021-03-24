//
// Generated with FrostbiteGen by Chod
// File: SDK\EntitySettings.h
// Created: Wed Mar 10 19:06:57 2021
//

#ifndef FBGEN_EntitySettings_H
#define FBGEN_EntitySettings_H

#include "ExecutionModeType.h"
#include "SystemSettings.h"

class EntitySettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E74F0;
	}
	ExecutionModeType m_ExecutionMode; // 0x20
	unsigned int m_OutOfEntityBusNetworkIdThreshold; // 0x24
	float m_WorldLimit; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_GameViewRootObjectType; // 0x30
	bool m_EditorGameViewEnable; // 0x38
	bool m_SpawnSubLevelsFromLogic; // 0x39
	unsigned char _0x3a[0x6];
}; // size = 0x40

#endif // FBGEN_EntitySettings_H
