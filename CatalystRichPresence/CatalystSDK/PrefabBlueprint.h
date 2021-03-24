//
// Generated with FrostbiteGen by Chod
// File: SDK\PrefabBlueprint.h
// Created: Wed Mar 10 19:03:03 2021
//

#ifndef FBGEN_PrefabBlueprint_H
#define FBGEN_PrefabBlueprint_H

#include "Array.h"
#include "TimeDeltaType.h"
#include "Blueprint.h"

class PrefabBlueprint :
	public Blueprint // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7E50;
	}
	Array<GameObjectData*> m_Objects; // 0x40
	TimeDeltaType m_TimeDeltaType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_PrefabBlueprint_H
