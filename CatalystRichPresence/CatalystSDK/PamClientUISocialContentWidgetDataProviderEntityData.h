//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientUISocialContentWidgetDataProviderEntityData.h
// Created: Wed Mar 10 19:04:46 2021
//

#ifndef FBGEN_PamClientUISocialContentWidgetDataProviderEntityData_H
#define FBGEN_PamClientUISocialContentWidgetDataProviderEntityData_H

#include "PamOnlineIdData.h"
#include "PamSocialContentProviderType.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamClientUISocialContentWidgetDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A040;
	}
	int m_MaxShownEntries; // 0x20
	unsigned char _0x24[0x4];
	PamOnlineIdData* m_PlayerId; // 0x28
	PamSocialContentProviderType m_ContentType; // 0x30
	bool m_ReverseOrder; // 0x34
	bool m_OnlyPublished; // 0x35
	unsigned char _0x36[0x2];
}; // size = 0x38

#endif // FBGEN_PamClientUISocialContentWidgetDataProviderEntityData_H
