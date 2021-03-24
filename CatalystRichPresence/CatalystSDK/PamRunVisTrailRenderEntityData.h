//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunVisTrailRenderEntityData.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRunVisTrailRenderEntityData_H
#define FBGEN_PamRunVisTrailRenderEntityData_H

#include "ObjectBlueprint.h"
#include "SpatialEntityData.h"

class PamRunVisTrailRenderEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142874080;
	}
	float m_HeightEditorObjects; // 0x60
	float m_HeightNormalObjects; // 0x64
	float m_SplineTesselationFactor; // 0x68
	float m_TrailEntitiesSpeedMSec; // 0x6c
	float m_TrailEntitiesSpawnIntervalSec; // 0x70
	float m_PlayerHeightSpawnOffset; // 0x74
	float m_MinTimeManualTrailFire; // 0x78
	unsigned char _0x7c[0x4];
	ObjectBlueprint* m_TrailEntity; // 0x80
	bool m_DrawPlayerToFirstNode; // 0x88
	bool m_DrawLastNodeToDestination; // 0x89
	unsigned char _0x8a[0x6];
}; // size = 0x90

#endif // FBGEN_PamRunVisTrailRenderEntityData_H
