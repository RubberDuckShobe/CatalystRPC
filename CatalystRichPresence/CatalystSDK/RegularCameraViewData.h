//
// Generated with FrostbiteGen by Chod
// File: SDK\RegularCameraViewData.h
// Created: Wed Mar 10 19:02:39 2021
//

#ifndef FBGEN_RegularCameraViewData_H
#define FBGEN_RegularCameraViewData_H

#include "Vec3.h"
#include "InputSuppressionData.h"
#include "RigidMeshAsset.h"
#include "ObjectBlueprint.h"
struct RegularCameraViewData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815FA0;
	}
	Vec3 m_MeshOffset; // 0x0
	InputSuppressionData m_InputSuppression; // 0x10
	float m_FieldOfView; // 0x18
	unsigned char _0x1c[0x4];
	RigidMeshAsset* m_Mesh; // 0x20
	ObjectBlueprint* m_MaskMeshBlueprint; // 0x28
	float m_ScreenExposureAreaScale; // 0x30
	bool m_FLIREnabled; // 0x34
	bool m_AllowFieldOfViewScaling; // 0x35
	bool m_LockMeshToRenderView; // 0x36
	unsigned char _0x37[0x9];
}; // size = 0x40

#endif // FBGEN_RegularCameraViewData_H
