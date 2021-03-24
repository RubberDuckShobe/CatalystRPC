//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformModifierEntityData.h
// Created: Wed Mar 10 19:00:08 2021
//

#ifndef FBGEN_TransformModifierEntityData_H
#define FBGEN_TransformModifierEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "ModifierAxis.h"
#include "EntityData.h"

class TransformModifierEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6290;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_In; // 0x20
	ModifierAxis m_Left; // 0x60
	ModifierAxis m_Up; // 0x64
	ModifierAxis m_Forward; // 0x68
	bool m_InvertFullTransform; // 0x6c
	bool m_InvertLeft; // 0x6d
	bool m_InvertUp; // 0x6e
	bool m_InvertForward; // 0x6f
	bool m_InvertTranslation; // 0x70
	unsigned char _0x71[0xf];
}; // size = 0x80

#endif // FBGEN_TransformModifierEntityData_H
