//
// Generated with FrostbiteGen by Chod
// File: SDK\PamTeleportEntityData.h
// Created: Wed Mar 10 19:03:42 2021
//

#ifndef FBGEN_PamTeleportEntityData_H
#define FBGEN_PamTeleportEntityData_H

#include "TeleportEntityData.h"

class PamTeleportEntityData :
	public TeleportEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C540;
	}
	bool m_SendTelemetry; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_PamTeleportEntityData_H
