//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIFlagInfosWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:03:31 2021
//

#ifndef FBGEN_PamUIFlagInfosWidgetDataProviderEntityData_H
#define FBGEN_PamUIFlagInfosWidgetDataProviderEntityData_H

#include "PamOnlineIdData.h"
#include "PamProgressionFlagInfoList.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIFlagInfosWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889E00;
	}
	PamOnlineIdData* m_PlayerOnlineId; // 0x20
	PamProgressionFlagInfoList* m_FlagInfoList; // 0x28
	bool m_CreateRowForEachFlagValue; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PamUIFlagInfosWidgetDataProviderEntityData_H
