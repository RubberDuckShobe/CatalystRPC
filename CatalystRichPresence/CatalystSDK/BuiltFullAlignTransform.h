//
// Generated with FrostbiteGen by Chod
// File: SDK\BuiltFullAlignTransform.h
// Created: Wed Mar 10 19:08:23 2021
//

#ifndef FBGEN_BuiltFullAlignTransform_H
#define FBGEN_BuiltFullAlignTransform_H

#include "LinearTransform.h"
struct BuiltFullAlignTransform
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF510;
	}
	LinearTransform m_TrackTransform; // 0x0
	LinearTransform m_InvAnimationDelta; // 0x40
	LinearTransform m_InvAlignJointTransform; // 0x80
	float m_Time; // 0xc0
	unsigned char _0xc4[0xc];
}; // size = 0xd0

#endif // FBGEN_BuiltFullAlignTransform_H
