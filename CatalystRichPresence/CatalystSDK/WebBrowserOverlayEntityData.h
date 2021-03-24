//
// Generated with FrostbiteGen by Chod
// File: SDK\WebBrowserOverlayEntityData.h
// Created: Wed Mar 10 18:58:47 2021
//

#ifndef FBGEN_WebBrowserOverlayEntityData_H
#define FBGEN_WebBrowserOverlayEntityData_H

#include "EntityData.h"

class WebBrowserOverlayEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289E750;
	}
	const char* m_URL; // 0x18
	const char* m_PersistentID; // 0x20
	bool m_StrongPersistent; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_WebBrowserOverlayEntityData_H
