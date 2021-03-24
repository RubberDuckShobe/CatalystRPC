//
// Generated with FrostbiteGen by Chod
// File: SDK\AntAnimatableComponentMeshData.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AntAnimatableComponentMeshData_H
#define FBGEN_AntAnimatableComponentMeshData_H

#include "AntAnimatableComponentMeshRenderType.h"
#include "AntAnimatableComponentMeshRenderContext.h"
#include "MeshAsset.h"
struct AntAnimatableComponentMeshData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816180;
	}
	AntAnimatableComponentMeshRenderType m_MeshRenderType; // 0x0
	AntAnimatableComponentMeshRenderContext m_MeshRenderContext; // 0x4
	MeshAsset* m_Mesh; // 0x8
	float m_CameraRelativeScaleX; // 0x10
	float m_CameraRelativeScaleY; // 0x14
	float m_CameraRelativeScaleZ; // 0x18
	float m_CameraRelativeOffsetX; // 0x1c
	float m_CameraRelativeOffsetY; // 0x20
	float m_CameraRelativeOffsetZ; // 0x24
}; // size = 0x28

#endif // FBGEN_AntAnimatableComponentMeshData_H
