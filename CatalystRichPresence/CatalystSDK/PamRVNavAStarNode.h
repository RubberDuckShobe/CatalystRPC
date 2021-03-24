//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavAStarNode.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavAStarNode_H
#define FBGEN_PamRVNavAStarNode_H

#include "Vec3.h"
#include "Guid.h"
#include "RunnersVisionNavTypes.h"
struct PamRVNavAStarNode
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872820;
	}
	Vec3 m_Position; // 0x0
	Guid m_MeshAssetGuid; // 0x10
	Guid m_GameSplineEntGuid; // 0x20
	RunnersVisionNavTypes m_RVType; // 0x30
	unsigned int m_ProgressionFlagHash; // 0x34
	bool m_IsGrouped; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_PamRVNavAStarNode_H
