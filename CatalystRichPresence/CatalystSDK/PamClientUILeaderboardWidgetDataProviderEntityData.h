//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientUILeaderboardWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:04:49 2021
//

#ifndef FBGEN_PamClientUILeaderboardWidgetDataProviderEntityData_H
#define FBGEN_PamClientUILeaderboardWidgetDataProviderEntityData_H

#include "PamLeaderboardScope.h"
#include "PamOnlineIdData.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamClientUILeaderboardWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889FE0;
	}
	unsigned int m_NumEntries; // 0x20
	PamLeaderboardScope m_Scope; // 0x24
	PamOnlineIdData* m_FindPlayer; // 0x28
	bool m_CenterOnPlayer; // 0x30
	bool m_InjectGlobalLeader; // 0x31
	bool m_RefreshOnInit; // 0x32
	bool m_ClearOnRefresh; // 0x33
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamClientUILeaderboardWidgetDataProviderEntityData_H
