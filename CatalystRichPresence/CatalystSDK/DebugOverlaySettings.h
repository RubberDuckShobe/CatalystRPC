//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugOverlaySettings.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugOverlaySettings_H
#define FBGEN_DebugOverlaySettings_H

#include "DataContainer.h"

class DebugOverlaySettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428462E0;
	}
	float m_MouseX; // 0x10
	float m_MouseY; // 0x14
	bool m_DebugInfoEnable; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_DebugOverlaySettings_H
