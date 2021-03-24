//
// Generated with FrostbiteGen by Chod
// File: SDK\OriginSettings.h
// Created: Wed Mar 10 19:05:25 2021
//

#ifndef FBGEN_OriginSettings_H
#define FBGEN_OriginSettings_H

#include "SystemSettings.h"

class OriginSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284F3D0;
	}
	const char* m_ContentId; // 0x20
	const char* m_Title; // 0x28
	const char* m_MultiplayerId; // 0x30
	const char* m_Language; // 0x38
	const char* m_AchievementsSecret; // 0x40
	int m_AchievementsTimeout; // 0x48
	unsigned char _0x4c[0x4];
	const char* m_InstallerGame; // 0x50
	const char* m_InstallerStudio; // 0x58
	bool m_Enabled; // 0x60
	bool m_RequiredForOnline; // 0x61
	bool m_Log; // 0x62
	bool m_AllowProductionEnvironment; // 0x63
	unsigned char _0x64[0x4];
}; // size = 0x68

#endif // FBGEN_OriginSettings_H
