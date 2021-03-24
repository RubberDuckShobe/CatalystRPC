//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceTransformKeyframe.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DiceTransformKeyframe_H
#define FBGEN_DiceTransformKeyframe_H

#include "LinearTransform.h"
#include "DiceTransformTangentMode.h"
struct DiceTransformKeyframe
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF4F0;
	}
	LinearTransform m_Value; // 0x0
	float m_Time; // 0x40
	DiceTransformTangentMode m_TangentMode; // 0x44
	bool m_AlignToGround; // 0x48
	bool m_AlignToGroundFollowsOwnerEntity; // 0x49
	bool m_RotateTransformToFaceEntity; // 0x4a
	unsigned char _0x4b[0x5];
}; // size = 0x50

#endif // FBGEN_DiceTransformKeyframe_H
