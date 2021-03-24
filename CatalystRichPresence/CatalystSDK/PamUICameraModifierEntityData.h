//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICameraModifierEntityData.h
// Created: Wed Mar 10 19:03:39 2021
//

#ifndef FBGEN_PamUICameraModifierEntityData_H
#define FBGEN_PamUICameraModifierEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "Vec2.h"
#include "EntityData.h"

class PamUICameraModifierEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A700;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_CameraTransform; // 0x20
	Vec3 m_PivotPosition; // 0x60
	Vec3 m_TargetPivot; // 0x70
	Vec3 m_NewCameraForward; // 0x80
	Vec3 m_MagneticPivot; // 0x90
	Vec3 m_LookAtTarget; // 0xa0
	Vec3 m_LookAtCameraPosition; // 0xb0
	float m_NearPlane; // 0xc0
	float m_FarPlane; // 0xc4
	float m_YawAcceleration; // 0xc8
	float m_YawDeceleration; // 0xcc
	float m_YawSpeed; // 0xd0
	float m_PitchAcceleration; // 0xd4
	float m_PitchDeceleration; // 0xd8
	float m_PitchSpeed; // 0xdc
	float m_MovementAcceleration; // 0xe0
	float m_MovementDeceleration; // 0xe4
	float m_MovementSpeed; // 0xe8
	float m_ZoomAcceleration; // 0xec
	float m_ZoomDeceleration; // 0xf0
	float m_ZoomSpeed; // 0xf4
	float m_MagneticAcceleration; // 0xf8
	float m_MagneticDeceleration; // 0xfc
	float m_MagneticSpeed; // 0x100
	float m_MagneticDamping; // 0x104
	float m_MagneticDampingCoefficient; // 0x108
	float m_MagneticDeadZone; // 0x10c
	float m_MagneticTargetTolerance; // 0x110
	float m_TransitionSpeed; // 0x114
	float m_MousePitchSpeed; // 0x118
	float m_MouseYawSpeed; // 0x11c
	float m_MouseZoomSpeed; // 0x120
	float m_MouseFallBackPlaneAngle; // 0x124
	float m_MouseMaxSelectAngle; // 0x128
	float m_MouseMaxSelectAngleWidth; // 0x12c
	float m_MouseYawMomentum; // 0x130
	float m_MousePitchMomentum; // 0x134
	float m_MouseTranslationMomentum; // 0x138
	float m_MouseMaxYawMomentum; // 0x13c
	float m_MouseMaxPitchMomentum; // 0x140
	float m_MouseMaxTranslationMomentum; // 0x144
	float m_MinPitch; // 0x148
	float m_MaxPitch; // 0x14c
	float m_MaxZoom; // 0x150
	float m_MinZoom; // 0x154
	float m_AutoZoomCoefficient; // 0x158
	float m_MaxDistance; // 0x15c
	Vec2 m_MapCenter; // 0x160
	Vec2 m_MapSecondCenter; // 0x168
	Vec2 m_ForcedElevationCenter; // 0x170
	float m_ForcedElevationStartRadius; // 0x178
	float m_ForcedElevationStopRadius; // 0x17c
	float m_ForcedElevation; // 0x180
	float m_ForcedElevationRoofStartOffset; // 0x184
	float m_ForcedElevationRoofStopOffset; // 0x188
	float m_ForcedElevationSafeZone; // 0x18c
	float m_Yaw; // 0x190
	float m_Pitch; // 0x194
	float m_Zoom; // 0x198
	float m_TranslateX; // 0x19c
	float m_TranslateZ; // 0x1a0
	Vec2 m_MouseTranslation; // 0x1a4
	Vec2 m_MouseRotation; // 0x1ac
	float m_FOV; // 0x1b4
	float m_AspectRatio; // 0x1b8
	bool m_UseRealTimeClock; // 0x1bc
	bool m_SmoothStartGoto; // 0x1bd
	bool m_AutoZoom; // 0x1be
	bool m_UseForcedElevation; // 0x1bf
}; // size = 0x1c0

#endif // FBGEN_PamUICameraModifierEntityData_H
