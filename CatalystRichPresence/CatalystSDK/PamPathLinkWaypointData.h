//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPathLinkWaypointData.h
// Created: Wed Mar 10 19:04:16 2021
//

#ifndef FBGEN_PamPathLinkWaypointData_H
#define FBGEN_PamPathLinkWaypointData_H

#include "PathLinkTypeBinding.h"
#include "CreatureMoveWaypointData.h"

class PamPathLinkWaypointData :
	public CreatureMoveWaypointData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C9C0;
	}
	PathLinkTypeBinding* m_AnimationType; // 0x30
	bool m_IsStart; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_PamPathLinkWaypointData_H
