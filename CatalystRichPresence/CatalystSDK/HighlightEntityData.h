//
// Generated with FrostbiteGen by Chod
// File: SDK\HighlightEntityData.h
// Created: Wed Mar 10 19:06:34 2021
//

#ifndef FBGEN_HighlightEntityData_H
#define FBGEN_HighlightEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "Vec2.h"
#include "EntityData.h"

class HighlightEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC630;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Color; // 0x20
	Vec2 m_TopLeft; // 0x30
	Vec2 m_BottomRight; // 0x38
	unsigned char m_Alpha; // 0x40
	unsigned char _0x41[0xf];
}; // size = 0x50

#endif // FBGEN_HighlightEntityData_H
