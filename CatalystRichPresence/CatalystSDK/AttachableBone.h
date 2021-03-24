//
// Generated with FrostbiteGen by Chod
// File: SDK\AttachableBone.h
// Created: Wed Mar 10 19:08:38 2021
//

#ifndef FBGEN_AttachableBone_H
#define FBGEN_AttachableBone_H

#include "Vec3.h"
#include "ModifierAxis.h"
struct AttachableBone
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AD88;
	}
	Vec3 m_Offset; // 0x0
	Vec3 m_RotationalOffset; // 0x10
	const char* m_BoneName; // 0x20
	int m_BoneId; // 0x28
	unsigned int m_BoneNameHash; // 0x2c
	ModifierAxis m_Left; // 0x30
	ModifierAxis m_Up; // 0x34
	ModifierAxis m_Forward; // 0x38
	bool m_InvertFullTransform; // 0x3c
	bool m_InvertLeft; // 0x3d
	bool m_InvertUp; // 0x3e
	bool m_InvertForward; // 0x3f
	bool m_InvertTranslation; // 0x40
	unsigned char _0x41[0xf];
}; // size = 0x50

#endif // FBGEN_AttachableBone_H
