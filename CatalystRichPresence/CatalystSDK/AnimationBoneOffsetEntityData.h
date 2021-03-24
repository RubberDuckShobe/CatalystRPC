//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationBoneOffsetEntityData.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimationBoneOffsetEntityData_H
#define FBGEN_AnimationBoneOffsetEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "LinearTransform.h"
#include "ModifierAxis.h"
#include "EntityData.h"

class AnimationBoneOffsetEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881130;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Offset; // 0x20
	LinearTransform m_In; // 0x30
	ModifierAxis m_Left; // 0x70
	ModifierAxis m_Up; // 0x74
	ModifierAxis m_Forward; // 0x78
	bool m_InvertFullTransform; // 0x7c
	bool m_InvertLeft; // 0x7d
	bool m_InvertUp; // 0x7e
	bool m_InvertForward; // 0x7f
	bool m_InvertTranslation; // 0x80
	bool m_OffsetXAxisInWorldSpace; // 0x81
	bool m_OffsetYAxisInWorldSpace; // 0x82
	bool m_OffsetZAxisInWorldSpace; // 0x83
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_AnimationBoneOffsetEntityData_H
