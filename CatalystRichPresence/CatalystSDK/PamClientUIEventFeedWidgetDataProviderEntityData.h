//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientUIEventFeedWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:04:49 2021
//

#ifndef FBGEN_PamClientUIEventFeedWidgetDataProviderEntityData_H
#define FBGEN_PamClientUIEventFeedWidgetDataProviderEntityData_H

#include "PamOnlineIdData.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamClientUIEventFeedWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A160;
	}
	PamOnlineIdData* m_PlayerId; // 0x20
}; // size = 0x28

#endif // FBGEN_PamClientUIEventFeedWidgetDataProviderEntityData_H
