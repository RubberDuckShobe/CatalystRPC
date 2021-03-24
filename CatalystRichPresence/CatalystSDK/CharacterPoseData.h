//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterPoseData.h
// Created: Wed Mar 10 19:08:16 2021
//

#ifndef FBGEN_CharacterPoseData_H
#define FBGEN_CharacterPoseData_H

#include "Vec3.h"
#include "Array.h"
#include "LookConstraintsData.h"
#include "CharacterPoseType.h"
#include "CharacterPoseCollisionType.h"
#include "DataContainer.h"

class CharacterPoseData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C5C0;
	}
	Array<Vec2> m_ThrottleModifierCurve; // 0x10
	float m_StepHeight; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_EyePosition; // 0x20
	Vec3 m_CollisionBoxMinExpand; // 0x30
	Vec3 m_CollisionBoxMaxExpand; // 0x40
	float m_Height; // 0x50
	unsigned char _0x54[0x4];
	Array<PoseTransitionTime> m_TransitionTimes; // 0x58
	LookConstraintsData m_LookConstraints; // 0x60
	CharacterPoseType m_PoseType; // 0x70
	CharacterPoseCollisionType m_CollisionType; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_CharacterPoseData_H
