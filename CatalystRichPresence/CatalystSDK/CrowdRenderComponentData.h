//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdRenderComponentData.h
// Created: Wed Mar 10 19:07:24 2021
//

#ifndef FBGEN_CrowdRenderComponentData_H
#define FBGEN_CrowdRenderComponentData_H

#include "LinearTransform.h"
#include "MeshLodGroup.h"
#include "BaseSwarmComponentData.h"

class CrowdRenderComponentData :
	public BaseSwarmComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428944B0;
	}
	LinearTransform m_HeadTrackingFocalPoint; // 0x70
	float m_AgentBoundingRadius; // 0xb0
	float m_AgentBoundingYOffset; // 0xb4
	MeshLodGroup* m_LodGroup; // 0xb8
	float m_LodScale; // 0xc0
	unsigned int m_MinimumLod; // 0xc4
	int m_MaximumCascadeForFullShadows; // 0xc8
	float m_MaxAnimationOffset; // 0xcc
	unsigned int m_AnimationRecordFramerate; // 0xd0
	float m_HeadTrackingMaxDistance; // 0xd4
	float m_MaxRotationAngle; // 0xd8
	unsigned char _0xdc[0x4];
	const char* m_HeadTrackingBoneName; // 0xe0
	bool m_ClampMaximumLod; // 0xe8
	bool m_HeadTrackingEnabled; // 0xe9
	unsigned char _0xea[0x6];
}; // size = 0xf0

#endif // FBGEN_CrowdRenderComponentData_H
