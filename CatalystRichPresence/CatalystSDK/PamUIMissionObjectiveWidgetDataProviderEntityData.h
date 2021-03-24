//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMissionObjectiveWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:03:26 2021
//

#ifndef FBGEN_PamUIMissionObjectiveWidgetDataProviderEntityData_H
#define FBGEN_PamUIMissionObjectiveWidgetDataProviderEntityData_H

#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIMissionObjectiveWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889EC0;
	}
	int m_ActiveObjectiveIndex; // 0x20
	bool m_OnlyActive; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamUIMissionObjectiveWidgetDataProviderEntityData_H
