//
// Generated with FrostbiteGen by Chod
// File: SDK\LoggingEntityData.h
// Created: Wed Mar 10 19:06:06 2021
//

#ifndef FBGEN_LoggingEntityData_H
#define FBGEN_LoggingEntityData_H

#include "Array.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "Realm.h"
#include "Vec2.h"
#include "EntityData.h"

class LoggingEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FC50;
	}
	Array<const char*> m_Strings; // 0x18
	LinearTransform m_TransformValue; // 0x20
	Vec3 m_Vec3Value; // 0x60
	Realm m_Realm; // 0x70
	float m_FloatValue; // 0x74
	int m_IntValue; // 0x78
	Vec2 m_Vec2Value; // 0x7c
	bool m_BoolValue; // 0x84
	unsigned char _0x85[0xb];
}; // size = 0x90

#endif // FBGEN_LoggingEntityData_H
