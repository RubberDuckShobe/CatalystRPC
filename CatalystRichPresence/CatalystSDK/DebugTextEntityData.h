//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugTextEntityData.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugTextEntityData_H
#define FBGEN_DebugTextEntityData_H

#include "Vec3.h"
#include "Realm.h"
#include "SpatialEntityData.h"

class DebugTextEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820550;
	}
	Vec3 m_TextColor; // 0x60
	const char* m_DebugText; // 0x70
	Realm m_Realm; // 0x78
	float m_Scale; // 0x7c
	bool m_Centered; // 0x80
	bool m_Visible; // 0x81
	bool m_DepthTest; // 0x82
	bool m_ScaleWithDistance; // 0x83
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_DebugTextEntityData_H
