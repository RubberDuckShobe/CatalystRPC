//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMissionsWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:03:26 2021
//

#ifndef FBGEN_PamUIMissionsWidgetDataProviderEntityData_H
#define FBGEN_PamUIMissionsWidgetDataProviderEntityData_H

#include "PamOnlineIdData.h"
#include "PamProgressionMissionFlagPairList.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIMissionsWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889E60;
	}
	PamOnlineIdData* m_PlayerOnlineId; // 0x20
	PamProgressionMissionFlagPairList* m_MissionFlagList; // 0x28
	bool m_OnlyCompleted; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PamUIMissionsWidgetDataProviderEntityData_H
