//
// Generated with FrostbiteGen by Chod
// File: SDK\TextSequenceEntityData.h
// Created: Wed Mar 10 19:00:23 2021
//

#ifndef FBGEN_TextSequenceEntityData_H
#define FBGEN_TextSequenceEntityData_H

#include "Realm.h"
#include "Array.h"
#include "Vec2.h"
#include "EntityData.h"

class TextSequenceEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC690;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Array<const char*> m_Events; // 0x20
	Array<TextSequenceItem*> m_Items; // 0x28
	Vec2 m_ScreenPosition; // 0x30
}; // size = 0x38

#endif // FBGEN_TextSequenceEntityData_H
