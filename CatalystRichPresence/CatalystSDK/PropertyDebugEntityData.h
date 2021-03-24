//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyDebugEntityData.h
// Created: Wed Mar 10 19:02:50 2021
//

#ifndef FBGEN_PropertyDebugEntityData_H
#define FBGEN_PropertyDebugEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "Vec4.h"
#include "PropertyDebugGraphMode.h"
#include "Vec2.h"
#include "EntityData.h"

class PropertyDebugEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428201F0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_TextColor; // 0x20
	Vec3 m_WorldPosition; // 0x30
	LinearTransform m_TransformValue; // 0x40
	Vec3 m_Vec3Value; // 0x80
	Vec4 m_Vec4Value; // 0x90
	Vec2 m_ScreenPosition; // 0xa0
	const char* m_ValuePrefix; // 0xa8
	float m_TextScale; // 0xb0
	Vec2 m_GraphSize; // 0xb4
	PropertyDebugGraphMode m_GraphMode; // 0xbc
	Vec2 m_GraphValueMinMax; // 0xc0
	float m_FloatValue; // 0xc8
	int m_IntValue; // 0xcc
	Vec2 m_Vec2Value; // 0xd0
	const char* m_StringValue; // 0xd8
	bool m_Multiline; // 0xe0
	bool m_ShowTransformInWorld; // 0xe1
	bool m_ShowTransformCoordinates; // 0xe2
	bool m_DefaultVisible; // 0xe3
	bool m_DrawGraph; // 0xe4
	bool m_AllowThroughAssertCheck; // 0xe5
	unsigned char _0xe6[0xa];
}; // size = 0xf0

#endif // FBGEN_PropertyDebugEntityData_H
