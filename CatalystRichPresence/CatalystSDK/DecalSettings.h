//
// Generated with FrostbiteGen by Chod
// File: SDK\DecalSettings.h
// Created: Wed Mar 10 19:07:16 2021
//

#ifndef FBGEN_DecalSettings_H
#define FBGEN_DecalSettings_H

#include "SystemSettings.h"

class DecalSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834970;
	}
	unsigned int m_RingBufferSizeInVerts; // 0x20
	unsigned int m_RingBufferRecreateSizeInVerts; // 0x24
	unsigned int m_ProjectedDecalsTrianglesPerJob; // 0x28
	float m_DecalRecreateDistanceInMeters; // 0x2c
	float m_DistanceCullFalloff; // 0x30
	float m_MinOcclusionTestDistance; // 0x34
	float m_MinOcclusionScreenArea; // 0x38
	int m_DebugPerEntityBatches; // 0x3c
	int m_DebugRingbuffer; // 0x40
	float m_DisplacementBias; // 0x44
	float m_DisplacementScale; // 0x48
	bool m_Enable; // 0x4c
	bool m_DrawEnable; // 0x4d
	bool m_DebugDrawEntityHandles; // 0x4e
	bool m_CullEnable; // 0x4f
	bool m_DistanceCullEnable; // 0x50
	bool m_FrustumCullEnable; // 0x51
	bool m_OcclusionCullEnable; // 0x52
	bool m_DebugOcclusionCullEnable; // 0x53
	bool m_DebugBatches; // 0x54
	bool m_WireframeEnable; // 0x55
	unsigned char _0x56[0x2];
}; // size = 0x58

#endif // FBGEN_DecalSettings_H
