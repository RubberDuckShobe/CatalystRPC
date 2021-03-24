//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleConfigData.h
// Created: Wed Mar 10 18:59:22 2021
//

#ifndef FBGEN_VehicleConfigData_H
#define FBGEN_VehicleConfigData_H

#include "AeroDynamicPhysicsData.h"
#include "Vec3.h"
#include "MotorbikeData.h"
#include "MotionDampingData.h"
#include "VehicleInputData.h"
#include "FloatPhysicsData.h"
#include "StabilizerData.h"
#include "Array.h"
#include "VehicleMode.h"
#include "InputThrottle.h"
#include "AntiRollBars.h"
#include "DataContainer.h"

class VehicleConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CEC0;
	}
	float m_AntiTwistMultiplier; // 0x10
	unsigned char _0x14[0x4];
	AeroDynamicPhysicsData* m_AeroDynamicPhysics; // 0x18
	Vec3 m_CenterOfMass; // 0x20
	Vec3 m_CenterOfMassHandlingOffset; // 0x30
	Vec3 m_InertiaOverride; // 0x40
	Vec3 m_InertiaModifier; // 0x50
	Vec3 m_ProximityExtScale; // 0x60
	MotorbikeData* m_MotorbikePhysics; // 0x70
	MotionDampingData* m_MotionDamping; // 0x78
	VehicleInputData m_Input; // 0x80
	FloatPhysicsData* m_FloatPhysics; // 0xd0
	StabilizerData* m_Stabilizer; // 0xd8
	Array<StabilizerSettings> m_Stabilizers; // 0xe0
	Array<ConstantForceData> m_ConstantForce; // 0xe8
	VehicleMode m_VehicleModeAtReset; // 0xf0
	float m_BodyMass; // 0xf4
	float m_GravityModifier; // 0xf8
	float m_YawMin; // 0xfc
	float m_YawMax; // 0x100
	float m_DownForceBaseFactor; // 0x104
	float m_DownForceWheelFactor; // 0x108
	float m_VehicleModeChangeEnteringTime; // 0x10c
	float m_VehicleModeChangeStartingTime; // 0x110
	float m_VehicleModeChangeStoppingTime; // 0x114
	float m_VehicleModeChangeLeavingTime; // 0x118
	float m_StandStillLowSpeedTimeLimit; // 0x11c
	float m_StaticFrictionBreakCollisionMod; // 0x120
	float m_StaticFrictionBreakVelocityMod; // 0x124
	float m_CoefficientOfAirFriction; // 0x128
	float m_AirDensity; // 0x12c
	float m_AirDragArea; // 0x130
	float m_WindResistanceBaseFactor; // 0x134
	float m_WindResistanceVelocityFactor; // 0x138
	float m_WindResistanceVelocityFactorMin; // 0x13c
	float m_WindResistanceVelocityFactorMax; // 0x140
	InputThrottle m_UseInputYawAsThrottle; // 0x144
	AntiRollBars m_AntiRollBars; // 0x158
	float m_MaxGroundSpeed; // 0x168
	float m_ProximityHeightTranslation; // 0x16c
	float m_FrictionAtLowVelocity; // 0x170
	bool m_UseDownForce; // 0x174
	bool m_UseDownForceWheelFactor; // 0x175
	bool m_UseGearbox; // 0x176
	bool m_UseStandStillBrake; // 0x177
	bool m_UseStandStillSleep; // 0x178
	bool m_UseTurnAroundForce; // 0x179
	bool m_UseMotorcycleControl; // 0x17a
	bool m_InvertPitchAllowed; // 0x17b
	bool m_UseWindResistance; // 0x17c
	unsigned char _0x17d[0x3];
}; // size = 0x180

#endif // FBGEN_VehicleConfigData_H
