//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientUIFollowedWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:04:49 2021
//

#ifndef FBGEN_PamClientUIFollowedWidgetDataProviderEntityData_H
#define FBGEN_PamClientUIFollowedWidgetDataProviderEntityData_H

#include "PamOnlineIdData.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamClientUIFollowedWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A0A0;
	}
	PamOnlineIdData* m_PlayerId; // 0x20
}; // size = 0x28

#endif // FBGEN_PamClientUIFollowedWidgetDataProviderEntityData_H
