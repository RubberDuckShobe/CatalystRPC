//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateFollowWaypointsData.h
// Created: Wed Mar 10 19:05:13 2021
//

#ifndef FBGEN_PamAIStateFollowWaypointsData_H
#define FBGEN_PamAIStateFollowWaypointsData_H

#include "AIStateFollowWaypointsData.h"

class PamAIStateFollowWaypointsData :
	public AIStateFollowWaypointsData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E170;
	}
	bool m_AvoidPlayers; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_PamAIStateFollowWaypointsData_H
