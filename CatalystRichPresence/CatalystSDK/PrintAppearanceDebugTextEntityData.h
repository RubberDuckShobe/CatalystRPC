//
// Generated with FrostbiteGen by Chod
// File: SDK\PrintAppearanceDebugTextEntityData.h
// Created: Wed Mar 10 19:02:54 2021
//

#ifndef FBGEN_PrintAppearanceDebugTextEntityData_H
#define FBGEN_PrintAppearanceDebugTextEntityData_H

#include "Vec3.h"
#include "Vec2.h"
#include "EntityData.h"

class PrintAppearanceDebugTextEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B4FB0;
	}
	const char* m_Text; // 0x18
	Vec3 m_TextColor; // 0x20
	Vec2 m_ScreenPosition; // 0x30
	float m_TimeToShow; // 0x38
	float m_TextScale; // 0x3c
	bool m_Enabled; // 0x40
	unsigned char _0x41[0xf];
}; // size = 0x50

#endif // FBGEN_PrintAppearanceDebugTextEntityData_H
