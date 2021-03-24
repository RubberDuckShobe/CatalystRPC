//
// Generated with FrostbiteGen by Chod
// File: SDK\DebrisSystemSettings.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DebrisSystemSettings_H
#define FBGEN_DebrisSystemSettings_H

#include "QualityLevel.h"
#include "DataContainer.h"

class DebrisSystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6800;
	}
	float m_TimeScale; // 0x10
	unsigned int m_DrawStats; // 0x14
	float m_MeshCullingDistance; // 0x18
	unsigned int m_MeshBatchCountLimit; // 0x1c
	unsigned int m_DebrisPoolSize; // 0x20
	unsigned int m_MeshDrawCountLimit; // 0x24
	float m_MeshStreamingPriorityMultiplier; // 0x28
	QualityLevel m_DebrisQualityLevel; // 0x2c
	bool m_Enable; // 0x30
	bool m_EnableJobs; // 0x31
	bool m_DrawEnable; // 0x32
	bool m_MeshHavokRenderingEnable; // 0x33
	bool m_MeshDrawTransforms; // 0x34
	bool m_MeshDrawBoundingBoxes; // 0x35
	bool m_MeshShadowEnable; // 0x36
	bool m_MeshViewCullingEnable; // 0x37
	bool m_MeshDrawCullStats; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_DebrisSystemSettings_H
