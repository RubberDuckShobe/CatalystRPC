//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateHeliFlyOffAndDespawnData.h
// Created: Wed Mar 10 19:05:13 2021
//

#ifndef FBGEN_PamAIStateHeliFlyOffAndDespawnData_H
#define FBGEN_PamAIStateHeliFlyOffAndDespawnData_H

#include "PamRailRideHeliWaypointData.h"
#include "PamAIStateBaseData.h"

class PamAIStateHeliFlyOffAndDespawnData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D2D0;
	}
	float m_TargetDespawnHeight; // 0x28
	unsigned char _0x2c[0x4];
	PamRailRideHeliWaypointData* m_DespawnWaypointDataPoint1; // 0x30
	PamRailRideHeliWaypointData* m_DespawnWaypointDataPoint2; // 0x38
}; // size = 0x40

#endif // FBGEN_PamAIStateHeliFlyOffAndDespawnData_H
