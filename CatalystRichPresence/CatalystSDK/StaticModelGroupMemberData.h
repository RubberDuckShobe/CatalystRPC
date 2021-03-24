//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticModelGroupMemberData.h
// Created: Wed Mar 10 19:00:55 2021
//

#ifndef FBGEN_StaticModelGroupMemberData_H
#define FBGEN_StaticModelGroupMemberData_H

#include "Array.h"
#include "GamePhysicsEntityData.h"
#include "MeshAsset.h"
#include "IndexRange.h"
struct StaticModelGroupMemberData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F8B8;
	}
	unsigned long m_CustomData; // 0x0
	Array<LinearTransform> m_InstanceTransforms; // 0x8
	Array<unsigned int> m_InstanceObjectVariation; // 0x10
	Array<RenderingOverrides> m_InstanceRenderingOverrides; // 0x18
	Array<RadiosityTypeOverride> m_InstanceRadiosityTypeOverride; // 0x20
	Array<bool> m_InstanceTerrainShaderNodesEnable; // 0x28
	GamePhysicsEntityData* m_MemberType; // 0x30
	MeshAsset* m_MeshAsset; // 0x38
	unsigned int m_InstanceCount; // 0x40
	unsigned int m_HealthStateEntityManagerId; // 0x44
	IndexRange m_PhysicsPartRange; // 0x48
	unsigned int m_PhysicsPartCountPerInstance; // 0x50
	IndexRange m_NetworkIdRange; // 0x54
	unsigned int m_NetworkIdCountPerInstance; // 0x5c
	unsigned int m_PartComponentCount; // 0x60
	int m_GroupMeshType; // 0x64
}; // size = 0x68

#endif // FBGEN_StaticModelGroupMemberData_H
