//
// Generated with FrostbiteGen by Chod
// File: SDK\PamOnlineRichPresenceData.h
// Created: Wed Mar 10 19:04:17 2021
//

#ifndef FBGEN_PamOnlineRichPresenceData_H
#define FBGEN_PamOnlineRichPresenceData_H

#include "OnlineRichPresenceContextValue.h"
#include "OnlineRichPresenceData.h"

class PamOnlineRichPresenceData :
	public OnlineRichPresenceData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880650;
	}
	OnlineRichPresenceContextValue* m_NoDistrict; // 0x28
}; // size = 0x30

#endif // FBGEN_PamOnlineRichPresenceData_H
