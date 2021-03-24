//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDynamicContentDefinition.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDynamicContentDefinition_H
#define FBGEN_PamDynamicContentDefinition_H

#include "PamUIMapMarkerDefinition.h"
#include "DiceUIVectorShapeAsset.h"
#include "PamSpatialFilterRules.h"
#include "PamDynamicContentType.h"
#include "DataContainer.h"

class PamDynamicContentDefinition :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873CC0;
	}
	const char* m_Name; // 0x10
	const char* m_GatewayTypeName; // 0x18
	unsigned int m_ContentKey; // 0x20
	unsigned char _0x24[0x4];
	PamUIMapMarkerDefinition* m_MapMarkerDefinition; // 0x28
	unsigned int m_MarkerBlueprintKey; // 0x30
	PamDynamicContentType m_MarkerBlueprintLogicType; // 0x34
	DiceUIVectorShapeAsset* m_Icon; // 0x38
	float m_MapAreaRadius; // 0x40
	unsigned char _0x44[0x4];
	const char* m_CreationNewsText; // 0x48
	const char* m_BeatYourRecordNewsSid; // 0x50
	const char* m_CreationNewsSid; // 0x58
	const char* m_FinishedYourContentSid; // 0x60
	const char* m_TypeSid; // 0x68
	unsigned int m_SpawnQuota; // 0x70
	unsigned int m_RecommendedContentSpawnQuota; // 0x74
	float m_SpawnBlockDistance; // 0x78
	float m_SpawnRadius; // 0x7c
	PamSpatialFilterRules m_SpatialFilter; // 0x80
	float m_StartPointDistance; // 0x94
	unsigned int m_CheckpointBlueprintKey; // 0x98
	PamDynamicContentType m_CheckpointBlueprintLogicType; // 0x9c
	unsigned int m_MinCheckpoints; // 0xa0
	unsigned int m_MaxCheckpoints; // 0xa4
	float m_MinCheckpointDistance; // 0xa8
	float m_MaxStartPointDistance; // 0xac
	float m_MinCheckpointDistanceSqr; // 0xb0
	float m_MaxStartPointDistanceSqr; // 0xb4
	bool m_UseFuzzyMapMarker; // 0xb8
	bool m_HideInactiveInMap; // 0xb9
	bool m_StatIsTime; // 0xba
	bool m_AllowTeleport; // 0xbb
	bool m_UpdateEventFeedOnNewRecord; // 0xbc
	bool m_UpdateEventFeedOnCreation; // 0xbd
	bool m_UpdateEventFeedOnFinishedFirstTime; // 0xbe
	bool m_PlayOnce; // 0xbf
	bool m_HasCheckpoints; // 0xc0
	unsigned char _0xc1[0x7];
}; // size = 0xc8

#endif // FBGEN_PamDynamicContentDefinition_H
