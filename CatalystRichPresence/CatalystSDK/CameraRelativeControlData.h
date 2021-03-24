//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraRelativeControlData.h
// Created: Wed Mar 10 19:08:19 2021
//

#ifndef FBGEN_CameraRelativeControlData_H
#define FBGEN_CameraRelativeControlData_H

#include "CameraRelativeControlEnum.h"
#include "Array.h"
#include "DataContainer.h"

class CameraRelativeControlData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E090;
	}
	CameraRelativeControlEnum m_CameraRelativeControl; // 0x10
	int m_CameraRelativeControl_Forward; // 0x14
	int m_CameraRelativeControl_Back; // 0x18
	int m_CameraRelativeControl_Strafe; // 0x1c
	int m_ForcedMovingBodyWorldSpaceLock; // 0x20
	unsigned char _0x24[0x4];
	Array<CameraRelativeControlPerSpeedData> m_SpeedRelativeData; // 0x28
	int m_ThrottleOutput; // 0x30
	int m_BrakeOutput; // 0x34
	int m_YawOutput; // 0x38
	int m_PitchOutput; // 0x3c
	int m_ForceAlignYawInputHint; // 0x40
	float m_ForceAlignYawInputThreshold; // 0x44
	float m_ForceAlignYawNoInputThreshold; // 0x48
	float m_ForceAlignYawThresholdPow; // 0x4c
	float m_ForceAlignYawAngleOffset; // 0x50
	int m_ForceAlignPitchInputHint; // 0x54
	float m_ForceAlignPitchInputThreshold; // 0x58
	float m_ForceAlignPitchNoInputThreshold; // 0x5c
	float m_ForceAlignPitchThresholdPow; // 0x60
	float m_ForceAlignPitchAngleOffset; // 0x64
	bool m_CombineWithNonRelativeControls; // 0x68
	bool m_UseCameraComponentTransform; // 0x69
	bool m_VehicleRelativeForward; // 0x6a
	bool m_VehicleRelativeStrafe; // 0x6b
	bool m_InvertedYawInReverse; // 0x6c
	bool m_ForceAlignYawWithCamera; // 0x6d
	bool m_ForceAlignPitchWithCamera; // 0x6e
	unsigned char _0x6f[0x1];
}; // size = 0x70

#endif // FBGEN_CameraRelativeControlData_H
