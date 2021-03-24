//
// Generated with FrostbiteGen by Chod
// File: SDK\PathfindingDebugSettings.h
// Created: Wed Mar 10 19:03:16 2021
//

#ifndef FBGEN_PathfindingDebugSettings_H
#define FBGEN_PathfindingDebugSettings_H

#include "PathfindingReplayMode.h"
#include "DataContainer.h"

class PathfindingDebugSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809EF0;
	}
	int m_DrawNavMesh; // 0x10
	float m_DrawDistance; // 0x14
	int m_TextStartX; // 0x18
	int m_TextStartY; // 0x1c
	int m_TextOffsetY; // 0x20
	PathfindingReplayMode m_ReplayMode; // 0x24
	bool m_DrawPolygonOutline; // 0x28
	bool m_DrawFilledPolygons; // 0x29
	bool m_DrawConnections; // 0x2a
	bool m_DrawObstacles; // 0x2b
	bool m_DrawAreaNormals; // 0x2c
	bool m_DrawObstacleFlags; // 0x2d
	bool m_DrawAreaPenaltyMults; // 0x2e
	bool m_DrawAreaUsageFlags; // 0x2f
	bool m_ColorizeAreaUsageFlags; // 0x30
	bool m_DrawLinkUsageDistances; // 0x31
	bool m_DrawLinkUsageFlags; // 0x32
	bool m_DrawOriginalLinkLocations; // 0x33
	bool m_DrawRecentNavProbes; // 0x34
	bool m_DrawRecentCreatePolyLinePaths; // 0x35
	bool m_DrawMoverCylinders; // 0x36
	bool m_DrawMoverGoals; // 0x37
	bool m_DrawMoverGoalsReached; // 0x38
	bool m_DrawMoverState; // 0x39
	bool m_DrawMoverAttractions; // 0x3a
	bool m_DrawRepulsors; // 0x3b
	bool m_DrawClientMotion; // 0x3c
	bool m_DrawCurPathSection; // 0x3d
	bool m_DrawFollowerGoals; // 0x3e
	bool m_DepthTest; // 0x3f
	bool m_DrawStats; // 0x40
	bool m_DrawMemory; // 0x41
	bool m_DrawTimings; // 0x42
	bool m_OriginalPaths; // 0x43
	bool m_RandomPositions; // 0x44
	bool m_PotentialObstacles; // 0x45
	unsigned char _0x46[0x2];
}; // size = 0x48

#endif // FBGEN_PathfindingDebugSettings_H
