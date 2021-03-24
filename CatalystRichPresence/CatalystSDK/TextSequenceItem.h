//
// Generated with FrostbiteGen by Chod
// File: SDK\TextSequenceItem.h
// Created: Wed Mar 10 19:00:23 2021
//

#ifndef FBGEN_TextSequenceItem_H
#define FBGEN_TextSequenceItem_H

#include "Vec2.h"
#include "Vec3.h"
#include "DataContainer.h"

class TextSequenceItem :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC6F0;
	}
	const char* m_Text; // 0x10
	Vec2 m_ScreenPosition; // 0x18
	float m_TimeToShow; // 0x20
	unsigned char _0x24[0x4];
	const char* m_TriggerEvent; // 0x28
	bool m_UseEntityScreenPosition; // 0x30
	unsigned char _0x31[0xf];
	Vec3 m_TextColor; // 0x40
}; // size = 0x50

#endif // FBGEN_TextSequenceItem_H
