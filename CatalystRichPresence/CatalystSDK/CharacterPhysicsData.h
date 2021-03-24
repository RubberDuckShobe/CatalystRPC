//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterPhysicsData.h
// Created: Wed Mar 10 19:08:16 2021
//

#ifndef FBGEN_CharacterPhysicsData_H
#define FBGEN_CharacterPhysicsData_H

#include "Array.h"
#include "CharacterStateType.h"
#include "CharacterSprintData.h"
#include "MaterialDecl.h"
#include "CharacterPhysicsBodyData.h"
#include "Asset.h"

class CharacterPhysicsData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C080;
	}
	Array<CharacterPoseData*> m_Poses; // 0x18
	Array<CharacterStateData*> m_States; // 0x20
	CharacterStateType m_DefaultState; // 0x28
	unsigned char _0x2c[0x4];
	CharacterSprintData* m_Sprint; // 0x30
	MaterialDecl m_MaterialPair; // 0x38
	int m_PushableObjectWeight; // 0x3c
	float m_Mass; // 0x40
	float m_MaxAscendAngle; // 0x44
	float m_SlideAngle; // 0x48
	float m_SlideSpeedCondition; // 0x4c
	float m_PhysicalRadius; // 0x50
	float m_EnterSwimStateDepth; // 0x54
	float m_ExitSwimStateDepth; // 0x58
	float m_InputAcceleration; // 0x5c
	float m_LadderAcceptAngle; // 0x60
	float m_LadderAcceptAnglePitch; // 0x64
	float m_JumpPenaltyTime; // 0x68
	float m_JumpPenaltyFactor; // 0x6c
	float m_RadiusToPredictCollisionOnCharacters; // 0x70
	unsigned char _0x74[0x4];
	CharacterPhysicsBodyData* m_PhysicsBody; // 0x78
	int m_CheckSupportRaycastCountMoving; // 0x80
	float m_CheckSupportLookaheadDistance; // 0x84
	float m_RayStartHeight; // 0x88
	float m_RayEndHeight; // 0x8c
	bool m_AllowSupportedSlideState; // 0x90
	bool m_AllowPoseChangeDuringTransition; // 0x91
	bool m_AutoPushAwayFromWallsInProne; // 0x92
	unsigned char _0x93[0x5];
}; // size = 0x98

#endif // FBGEN_CharacterPhysicsData_H
