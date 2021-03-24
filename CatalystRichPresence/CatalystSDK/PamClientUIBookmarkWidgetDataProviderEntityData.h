//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientUIBookmarkWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:04:50 2021
//

#ifndef FBGEN_PamClientUIBookmarkWidgetDataProviderEntityData_H
#define FBGEN_PamClientUIBookmarkWidgetDataProviderEntityData_H

#include "PamOnlineIdData.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamClientUIBookmarkWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A1C0;
	}
	PamOnlineIdData* m_PlayerId; // 0x20
}; // size = 0x28

#endif // FBGEN_PamClientUIBookmarkWidgetDataProviderEntityData_H
