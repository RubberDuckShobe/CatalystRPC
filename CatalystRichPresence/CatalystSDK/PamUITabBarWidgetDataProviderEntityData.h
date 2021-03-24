//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUITabBarWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:03:22 2021
//

#ifndef FBGEN_PamUITabBarWidgetDataProviderEntityData_H
#define FBGEN_PamUITabBarWidgetDataProviderEntityData_H

#include "Array.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUITabBarWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889CE0;
	}
	int m_TabCount; // 0x20
	unsigned char _0x24[0x4];
	Array<int> m_NameHashes; // 0x28
}; // size = 0x30

#endif // FBGEN_PamUITabBarWidgetDataProviderEntityData_H
