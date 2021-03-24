//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEngagementManagerPresenceBackendData.h
// Created: Wed Mar 10 19:04:40 2021
//

#ifndef FBGEN_PamEngagementManagerPresenceBackendData_H
#define FBGEN_PamEngagementManagerPresenceBackendData_H

#include "PresenceBackendData.h"

class PamEngagementManagerPresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880830;
	}
	const char* m_MessageApiPath; // 0x18
	const char* m_ImpressionApiPath; // 0x20
}; // size = 0x28

#endif // FBGEN_PamEngagementManagerPresenceBackendData_H
