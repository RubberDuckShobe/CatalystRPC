//
// Generated with FrostbiteGen by Chod
// File: SDK\WheelConfigData.h
// Created: Wed Mar 10 18:58:46 2021
//

#ifndef FBGEN_WheelConfigData_H
#define FBGEN_WheelConfigData_H

#include "RotationBodyData.h"
#include "SphereCollisionData.h"
#include "Vec3.h"
#include "SpringData.h"
#include "Curve2D.h"
#include "Array.h"
#include "MaterialDecl.h"
#include "DataContainer.h"

class WheelConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C920;
	}
	RotationBodyData* m_RotationBody; // 0x10
	SphereCollisionData m_SphereCollision; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Offset; // 0x20
	Vec3 m_Inertia; // 0x30
	SpringData m_Spring; // 0x40
	float m_Mass; // 0x60
	float m_Radius; // 0x64
	float m_Width; // 0x68
	float m_RollingResistanceInternalBaseFactor; // 0x6c
	float m_RollingResistanceBaseFactor; // 0x70
	float m_RollingResistanceVelocityFactor; // 0x74
	float m_EngineBrakeVelocityFactor; // 0x78
	float m_EngineBrakeMinFactor; // 0x7c
	float m_EngineBrakeMaxFactor; // 0x80
	unsigned char _0x84[0x4];
	Array<Vec2> m_TransmissionLoss; // 0x88
	float m_DiffGearRatio; // 0x90
	float m_LowSpeedSteeringSensitivity; // 0x94
	float m_MidSpeedSteeringSensitivity; // 0x98
	float m_HighSpeedSteeringSensitivity; // 0x9c
	float m_SensitivityRangeScale; // 0xa0
	float m_LowSpeedSteeringSensitivityLimit; // 0xa4
	float m_MidSpeedSteeringSensitivityLimit; // 0xa8
	float m_HighSpeedSteeringSensitivityLimit; // 0xac
	float m_TrackedTurnSpeedLimit; // 0xb0
	float m_TrackedForwardSpeedLimit; // 0xb4
	float m_TrackedSlipSteerReductionScale; // 0xb8
	unsigned char _0xbc[0x4];
	Curve2D* m_SteerInertia; // 0xc0
	Array<SensitivityAtVelocity> m_SteeringSensitivity; // 0xc8
	float m_TrackedSteeringBoostOnOppositeTorque; // 0xd0
	float m_SlopeGripMinAngle; // 0xd4
	float m_SlopeGripMaxAngle; // 0xd8
	int m_SlopeGripExponent; // 0xdc
	float m_OffGroundGravityModifier; // 0xe0
	float m_SideSlipAngleMaxSlipCondition; // 0xe4
	float m_AngularVelocityMinSlipCondition; // 0xe8
	float m_WheelVelocityXMinSlipCondition; // 0xec
	float m_WheelSlipRatioMaxSlipCondition; // 0xf0
	float m_LongitudinalFrictionForceMaxFactor; // 0xf4
	float m_LateralFrictionForceMaxFactor; // 0xf8
	unsigned char _0xfc[0x4];
	Array<FrictionScaleAtVelocity> m_LongitudeFrictionScale; // 0x100
	Array<FrictionScaleAtVelocity> m_LattitudeFrictionScale; // 0x108
	float m_WheelFrictionLattitudeBrakeScale; // 0x110
	float m_Resistance; // 0x114
	float m_FxTorqueRadiusMultiplier; // 0x118
	float m_FrictionMomentVelocityMin; // 0x11c
	float m_FrictionMomentVelocityMax; // 0x120
	float m_FrictionMomentMultiplier; // 0x124
	float m_FrictionMomentMaxFactor; // 0x128
	float m_BrakeFactor; // 0x12c
	float m_BrakeForce; // 0x130
	float m_HandBrakeFactor; // 0x134
	float m_HandBrakeForce; // 0x138
	float m_TotalFrictionScale; // 0x13c
	float m_TotalLateralFrictionScale; // 0x140
	float m_LateralPosK; // 0x144
	float m_LateralNegK; // 0x148
	float m_LongitudinalPosK; // 0x14c
	float m_LongitudinalNegK; // 0x150
	float m_AlignMomScale; // 0x154
	float m_WheelBaseLateral; // 0x158
	float m_WheelBaseLongitudinal; // 0x15c
	int m_DrivingType; // 0x160
	int m_SteeringType; // 0x164
	int m_FrictionMethod; // 0x168
	int m_RotationDirectionIndex; // 0x16c
	int m_SteeringAngleIndex; // 0x170
	int m_PacejkaConfigIndex; // 0x174
	int m_EngineIndex; // 0x178
	int m_AckermanDeviceType; // 0x17c
	MaterialDecl m_CollisionMaterialPair; // 0x180
	bool m_AllowGripSlipTransition; // 0x184
	bool m_AutoHandBrakeIfNoThrottleAndSteer; // 0x185
	bool m_UseRollingResistanceVelocityFactor; // 0x186
	bool m_UseRollingResistanceBaseFactor; // 0x187
	bool m_UseEngineBrake; // 0x188
	bool m_IsAllowedToSpin; // 0x189
	bool m_HasSteeringInverted; // 0x18a
	bool m_UseFrictionMoment; // 0x18b
	bool m_UseLowSpeedAutoBrake; // 0x18c
	bool m_AdjustWheelRotation; // 0x18d
	unsigned char _0x18e[0x2];
}; // size = 0x190

#endif // FBGEN_WheelConfigData_H
