//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelStartPoint.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LevelStartPoint_H
#define FBGEN_LevelStartPoint_H

#include "Array.h"
struct LevelStartPoint
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809528;
	}
	const char* m_Name; // 0x0
	const char* m_Category; // 0x8
	Array<const char*> m_AutoloadSublevels; // 0x10
	bool m_IsDefault; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_LevelStartPoint_H
