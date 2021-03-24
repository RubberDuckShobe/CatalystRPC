//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNavigationMasterData.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNavigationMasterData_H
#define FBGEN_PamNavigationMasterData_H

#include "LinearTransform.h"
#include "Vec3.h"
#include "PamRVNavAStarContainer.h"
#include "ObjectBlueprint.h"
#include "SpatialEntityData.h"

class PamNavigationMasterData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873D80;
	}
	Vec3 m_CurrentPosition; // 0x60
	LinearTransform m_PlayerTransform; // 0x70
	Vec3 m_DestinationPosition; // 0xb0
	ObjectBlueprint* m_MapSplineMesh; // 0xc0
	PamRVNavAStarContainer m_PathData; // 0xc8
	float m_DistanceBetweenPoints; // 0xd8
	float m_MeshScale; // 0xdc
	float m_UnHighlightDistance; // 0xe0
	float m_NodeTriggerDistance; // 0xe4
	float m_DistanceTriggerToRecalculateRoute; // 0xe8
	int m_NumObjectsHighlightedAhead; // 0xec
	float m_HighPriorityLinkMultiplier; // 0xf0
	float m_SkipFirstNodeAngleResultPerc; // 0xf4
	ObjectBlueprint* m_ArrowMesh; // 0xf8
	bool m_RecalculateRouteWhileWalking; // 0x100
	unsigned char _0x101[0xf];
}; // size = 0x110

#endif // FBGEN_PamNavigationMasterData_H
