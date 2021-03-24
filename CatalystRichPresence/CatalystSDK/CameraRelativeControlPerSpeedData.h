//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraRelativeControlPerSpeedData.h
// Created: Wed Mar 10 19:08:19 2021
//

#ifndef FBGEN_CameraRelativeControlPerSpeedData_H
#define FBGEN_CameraRelativeControlPerSpeedData_H

struct CameraRelativeControlPerSpeedData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DB48;
	}
	float m_SpeedThreshold; // 0x0
	float m_WorldSpaceLockEfficiency; // 0x4
	float m_WorldSpaceLockEfficiencyAway; // 0x8
	float m_ThrottleForSteeringHelp; // 0xc
	float m_ThrottleForSteeringHelpStrength; // 0x10
	float m_ThrottleHold; // 0x14
	float m_MinInputMagnitude; // 0x18
	float m_ThrottleExponent; // 0x1c
	float m_TurningExponent; // 0x20
	float m_FullTurningThreshold; // 0x24
	float m_FullTurningBlending; // 0x28
	float m_ExtraForwardZoneAngle; // 0x2c
	float m_AngularYawConstraint; // 0x30
	bool m_UseInForwardAndNeutralGears; // 0x34
	bool m_UseInReverseGear; // 0x35
	bool m_UseInBoost; // 0x36
	bool m_UseNotInBoost; // 0x37
	bool m_InvertExtraForwardZoneIfBackwards; // 0x38
	bool m_InvertExtraForwardZoneOnSideFacingCamera; // 0x39
	unsigned char _0x3a[0x2];
}; // size = 0x3c

#endif // FBGEN_CameraRelativeControlPerSpeedData_H
