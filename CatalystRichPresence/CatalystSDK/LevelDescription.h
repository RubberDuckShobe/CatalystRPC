//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelDescription.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LevelDescription_H
#define FBGEN_LevelDescription_H

#include "Array.h"
struct LevelDescription
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809268;
	}
	const char* m_Name; // 0x0
	const char* m_Description; // 0x8
	Array<LevelDescriptionComponent*> m_Components; // 0x10
	bool m_IsMultiplayer; // 0x18
	bool m_IsCoop; // 0x19
	bool m_IsMenu; // 0x1a
	bool m_IsEpilogue; // 0x1b
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_LevelDescription_H
