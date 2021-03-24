//
// Generated with FrostbiteGen by Chod
// File: SDK\AlternateCameraViewData.h
// Created: Wed Mar 10 19:08:46 2021
//

#ifndef FBGEN_AlternateCameraViewData_H
#define FBGEN_AlternateCameraViewData_H

#include "Vec3.h"
#include "RigidMeshAsset.h"
#include "ObjectBlueprint.h"
#include "Array.h"
#include "InputSuppressionData.h"
#include "DataContainer.h"

class AlternateCameraViewData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428164A0;
	}
	float m_FieldOfView; // 0x10
	float m_FovTransitionTime; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_MeshOffset; // 0x20
	float m_WorldSpaceLockEfficiency; // 0x30
	unsigned char _0x34[0x4];
	RigidMeshAsset* m_Mesh; // 0x38
	ObjectBlueprint* m_MaskMeshBlueprint; // 0x40
	Array<HudData*> m_Hud; // 0x48
	float m_FadeInDuration; // 0x50
	float m_FadeOutDuration; // 0x54
	float m_BlackDuration; // 0x58
	unsigned char _0x5c[0x4];
	InputSuppressionData m_InputSuppression; // 0x60
	float m_ScreenExposureAreaScale; // 0x68
	bool m_AllowFieldOfViewScaling; // 0x6c
	bool m_LockMeshToRenderView; // 0x6d
	bool m_FadeToBlack; // 0x6e
	bool m_ToggleViewChange; // 0x6f
	bool m_UseProfileOptionForToggleViewChange; // 0x70
	bool m_FLIREnabled; // 0x71
	unsigned char _0x72[0xe];
}; // size = 0x80

#endif // FBGEN_AlternateCameraViewData_H
