//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticModelEntityData.h
// Created: Wed Mar 10 19:00:55 2021
//

#ifndef FBGEN_StaticModelEntityData_H
#define FBGEN_StaticModelEntityData_H

#include "MeshAsset.h"
#include "Array.h"
#include "StaticModelNetworkInfo.h"
#include "GamePhysicsEntityData.h"

class StaticModelEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820A90;
	}
	Array<PartLinkData*> m_PartLinks; // 0x90
	MeshAsset* m_Mesh; // 0x98
	unsigned int m_BoneCount; // 0xa0
	unsigned char _0xa4[0x4];
	Array<LinearTransform> m_BasePoseTransforms; // 0xa8
	Array<PhysicsPartInfo> m_PhysicsPartInfos; // 0xb0
	StaticModelNetworkInfo m_NetworkInfo; // 0xb8
	bool m_ExcludeFromNearbyObjectDestruction; // 0xd8
	bool m_AnimatePhysics; // 0xd9
	bool m_TerrainShaderNodesEnable; // 0xda
	bool m_TeleportPhysicsOnTransformChanges; // 0xdb
	bool m_Visible; // 0xdc
	bool m_OverlayEnabled; // 0xdd
	unsigned char _0xde[0x2];
}; // size = 0xe0

#endif // FBGEN_StaticModelEntityData_H
