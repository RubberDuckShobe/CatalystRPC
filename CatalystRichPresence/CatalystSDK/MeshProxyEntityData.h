//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshProxyEntityData.h
// Created: Wed Mar 10 19:05:55 2021
//

#ifndef FBGEN_MeshProxyEntityData_H
#define FBGEN_MeshProxyEntityData_H

#include "Vec3.h"
#include "MeshAsset.h"
#include "Array.h"
#include "SpatialEntityData.h"

class MeshProxyEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841B30;
	}
	Vec3 m_LightprobePosition; // 0x60
	MeshAsset* m_Mesh; // 0x70
	Array<LinearTransform> m_BasePoseTransforms; // 0x78
	Array<LinearTransform> m_BindPoseLocalTransforms; // 0x80
	Array<LinearTransform> m_InverseBindPoseTransforms; // 0x88
}; // size = 0x90

#endif // FBGEN_MeshProxyEntityData_H
