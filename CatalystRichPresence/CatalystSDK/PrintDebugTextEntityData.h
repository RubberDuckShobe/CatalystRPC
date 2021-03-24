//
// Generated with FrostbiteGen by Chod
// File: SDK\PrintDebugTextEntityData.h
// Created: Wed Mar 10 19:02:54 2021
//

#ifndef FBGEN_PrintDebugTextEntityData_H
#define FBGEN_PrintDebugTextEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "Vec2.h"
#include "EntityData.h"

class PrintDebugTextEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820250;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_TextColor; // 0x20
	const char* m_Text; // 0x30
	Vec2 m_ScreenPosition; // 0x38
	float m_TimeToShow; // 0x40
	float m_TextScale; // 0x44
	bool m_Enabled; // 0x48
	unsigned char _0x49[0x7];
}; // size = 0x50

#endif // FBGEN_PrintDebugTextEntityData_H
