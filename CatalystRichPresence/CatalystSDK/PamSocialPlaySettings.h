//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSocialPlaySettings.h
// Created: Wed Mar 10 19:03:48 2021
//

#ifndef FBGEN_PamSocialPlaySettings_H
#define FBGEN_PamSocialPlaySettings_H

#include "SystemSettings.h"

class PamSocialPlaySettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877AC0;
	}
	unsigned int m_Max3dPresencePlayerCount; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamSocialPlaySettings_H
