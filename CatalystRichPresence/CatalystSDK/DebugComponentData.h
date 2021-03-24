//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugComponentData.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugComponentData_H
#define FBGEN_DebugComponentData_H

#include "Realm.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class DebugComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838240;
	}
	Realm m_Realm; // 0x80
	unsigned char _0x84[0x4];
	TextureAsset* m_DebugTexture; // 0x88
	bool m_Enable; // 0x90
	bool m_Fullscreen; // 0x91
	unsigned char _0x92[0xe];
}; // size = 0xa0

#endif // FBGEN_DebugComponentData_H
