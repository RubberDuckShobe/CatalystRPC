//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintList.h
// Created: Wed Mar 10 19:08:28 2021
//

#ifndef FBGEN_BlueprintList_H
#define FBGEN_BlueprintList_H

#include "Vec3.h"
#include "Array.h"
struct BlueprintList
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428726A0;
	}
	Vec3 m_Color; // 0x0
	int m_BlueprintsPerGridSquare; // 0x10
	unsigned char _0x14[0x4];
	Array<Blueprint*> m_Blueprints; // 0x18
	Array<Blueprint*> m_BlueprintsOnePerSquare; // 0x20
	unsigned char _0x28[0x8];
}; // size = 0x30

#endif // FBGEN_BlueprintList_H
