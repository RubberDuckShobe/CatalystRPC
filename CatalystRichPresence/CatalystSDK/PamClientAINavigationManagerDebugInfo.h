//
// Generated with FrostbiteGen by Chod
// File: SDK\PamClientAINavigationManagerDebugInfo.h
// Created: Wed Mar 10 19:05:01 2021
//

#ifndef FBGEN_PamClientAINavigationManagerDebugInfo_H
#define FBGEN_PamClientAINavigationManagerDebugInfo_H

#include "Vec3.h"
#include "Array.h"
struct PamClientAINavigationManagerDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AEC8;
	}
	Vec3 m_LastWaypointPosition; // 0x0
	Vec3 m_EffectiveCommitPosition; // 0x10
	Array<const char*> m_ActivityDebugStrings; // 0x20
	Array<ClientWaypointDebugInfo> m_Waypoints; // 0x28
}; // size = 0x30

#endif // FBGEN_PamClientAINavigationManagerDebugInfo_H
