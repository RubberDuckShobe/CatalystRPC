//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterBlueprint.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_CharacterBlueprint_H
#define FBGEN_CharacterBlueprint_H

#include "TimeDeltaType.h"
#include "ObjectBlueprint.h"

class CharacterBlueprint :
	public ObjectBlueprint // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817940;
	}
	TimeDeltaType m_TimeDeltaType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_CharacterBlueprint_H
