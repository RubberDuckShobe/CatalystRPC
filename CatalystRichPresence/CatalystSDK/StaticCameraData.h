//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticCameraData.h
// Created: Wed Mar 10 19:00:56 2021
//

#ifndef FBGEN_StaticCameraData_H
#define FBGEN_StaticCameraData_H

#include "Array.h"
#include "TargetCameraData.h"

class StaticCameraData :
	public TargetCameraData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428176A0;
	}
	Array<Vec3> m_LeftCurve; // 0x70
	Array<Vec3> m_RightCurve; // 0x78
	Array<Vec3> m_UpCurve; // 0x80
	Array<Vec3> m_DownCurve; // 0x88
	Array<CameraLoosePartPhysicsData*> m_LoosePartPhysics; // 0x90
	float m_LeftYawAngle; // 0x98
	float m_RightYawAngle; // 0x9c
	float m_UpPitchAngle; // 0xa0
	float m_DownPitchAngle; // 0xa4
	int m_AverageFilterFrames; // 0xa8
	int m_YawInputAction; // 0xac
	int m_PitchInputAction; // 0xb0
	float m_WorldSpaceLockEfficiencyYaw; // 0xb4
	float m_WorldSpaceLockEfficiencyYawAway; // 0xb8
	float m_WorldSpaceLockEfficiencyPitch; // 0xbc
	float m_YawSensitivityNonZoomed; // 0xc0
	float m_YawSensitivityZoomed; // 0xc4
	float m_PitchSensitivityNonZoomed; // 0xc8
	float m_PitchSensitivityZoomed; // 0xcc
	bool m_MergeLeftAndRightCurves; // 0xd0
	bool m_MergeUpAndDownCurves; // 0xd1
	bool m_MirrorHorizontalCurves; // 0xd2
	bool m_MirrorVerticalCurves; // 0xd3
	bool m_AccumulateInput; // 0xd4
	bool m_ResetAccumulatedInputOnViewChange; // 0xd5
	unsigned char _0xd6[0xa];
}; // size = 0xe0

#endif // FBGEN_StaticCameraData_H
