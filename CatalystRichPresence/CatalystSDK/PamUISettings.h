//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUISettings.h
// Created: Wed Mar 10 19:03:24 2021
//

#ifndef FBGEN_PamUISettings_H
#define FBGEN_PamUISettings_H

#include "Guid.h"
#include "SystemSettings.h"

class PamUISettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878A80;
	}
	Guid m_IMSettingsPartition; // 0x20
	Guid m_MapSettingsPartition; // 0x30
	bool m_ShowBuildInfo; // 0x40
	bool m_RandomizeBuildInfoLocation; // 0x41
	bool m_HideBuildInfoOnLevel; // 0x42
	unsigned char _0x43[0x5];
}; // size = 0x48

#endif // FBGEN_PamUISettings_H
