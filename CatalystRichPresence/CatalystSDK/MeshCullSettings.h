//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshCullSettings.h
// Created: Wed Mar 10 19:05:56 2021
//

#ifndef FBGEN_MeshCullSettings_H
#define FBGEN_MeshCullSettings_H

#include "DataContainer.h"

class MeshCullSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142840150;
	}
	int m_FreezeFrustumViewIndex; // 0x10
	unsigned int m_DrawDebugViewIndex; // 0x14
	int m_DrawVisibleEntitiesFrustumIndex; // 0x18
	int m_DrawHiddenEntitiesFrustumIndex; // 0x1c
	int m_HiPrepareSkipCountDistanceCull; // 0x20
	int m_HiPrepareSkipCountOcclusionCull; // 0x24
	int m_HiPrepareSkipCountExtrusionViewCull; // 0x28
	int m_HiPrepareSkipCountFrustumCull; // 0x2c
	int m_HiPrepareDrawFrustumIndex; // 0x30
	int m_HiPrepareDrawGridIndex; // 0x34
	float m_FlatMissingExtrusionLength; // 0x38
	bool m_EnableJobs; // 0x3c
	bool m_DrawVisibleEntitiesProjection; // 0x3d
	bool m_DrawVisibleEntitiesBounds; // 0x3e
	bool m_DrawHiddenEntitiesProjection; // 0x3f
	bool m_DrawHiddenEntitiesBounds; // 0x40
	bool m_DisableZChecking; // 0x41
	bool m_DisableZShadowChecking; // 0x42
	bool m_EnableEarlyOutFullyInside; // 0x43
	bool m_HiEnable; // 0x44
	bool m_HiEnableDistanceCull; // 0x45
	bool m_HiEnableOcclusionCull; // 0x46
	bool m_HiEnableExtrusionView; // 0x47
	bool m_HiEnableInstanceFlags; // 0x48
	bool m_HiEnablePrepareFrustumTesting; // 0x49
	bool m_HiPrepareDrawHierarchy; // 0x4a
	bool m_HiPrepareDrawHierarchyLocal; // 0x4b
	bool m_FlatUseTracingShadowCulling; // 0x4c
	bool m_FlatEnableFlags; // 0x4d
	bool m_FlatEnableSecondarySizeCulling; // 0x4e
	bool m_FlatPrecalculatedMeshExtrusionEnable; // 0x4f
	bool m_FlatPrecalculatedMeshOcclusionEnable; // 0x50
	bool m_FlatDrawPrecomputedExtrusionStats; // 0x51
	unsigned char _0x52[0x6];
}; // size = 0x58

#endif // FBGEN_MeshCullSettings_H
