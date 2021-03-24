//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraComponentData.h
// Created: Wed Mar 10 19:08:21 2021
//

#ifndef FBGEN_CameraComponentData_H
#define FBGEN_CameraComponentData_H

#include "RegularCameraViewData.h"
#include "Vec3.h"
#include "LinearTransform.h"
#include "TargetCameraData.h"
#include "AlternateCameraViewData.h"
#include "CameraRelativeControlData.h"
#include "SoldierAnimatedCameraData.h"
#include "StanceCameraData.h"
#include "CameraComponentSoundData.h"
#include "GameComponentData.h"

class CameraComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E210;
	}
	RegularCameraViewData m_RegularView; // 0x70
	Vec3 m_CameraTransitionPos; // 0xb0
	LinearTransform m_OverrideTransform; // 0xc0
	TargetCameraData* m_Camera; // 0x100
	float m_FieldOfView; // 0x108
	float m_ForceFieldOfView; // 0x10c
	AlternateCameraViewData* m_AlternateView; // 0x110
	float m_OverrideFreelookPitch; // 0x118
	float m_OverrideFreelookYaw; // 0x11c
	CameraRelativeControlData* m_CameraRelativeControlConfig; // 0x120
	float m_FreezeHeight; // 0x128
	SoldierAnimatedCameraData m_SoldierAnimatedCamera; // 0x12c
	float m_CameraTransitionTime; // 0x134
	unsigned int m_MeshParentComponentNumber; // 0x138
	unsigned char _0x13c[0x4];
	StanceCameraData m_StanceData; // 0x140
	CameraComponentSoundData* m_CameraSoundData; // 0x150
	bool m_EnableCameraMesh; // 0x158
	bool m_TransparentDepthTestEnable; // 0x159
	bool m_OverrideFreelookEnable; // 0x15a
	bool m_AlternateViewEnabled; // 0x15b
	bool m_IsFirstPerson; // 0x15c
	bool m_ReceiveImpulsesAsThirdPerson; // 0x15d
	bool m_UseCameraTransition; // 0x15e
	unsigned char _0x15f[0x1];
}; // size = 0x160

#endif // FBGEN_CameraComponentData_H
