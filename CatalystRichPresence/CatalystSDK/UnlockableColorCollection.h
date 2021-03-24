//
// Generated with FrostbiteGen by Chod
// File: SDK\UnlockableColorCollection.h
// Created: Wed Mar 10 18:59:40 2021
//

#ifndef FBGEN_UnlockableColorCollection_H
#define FBGEN_UnlockableColorCollection_H

#include "ColorReference.h"
#include "Array.h"
#include "DataContainer.h"

class UnlockableColorCollection :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811A60;
	}
	ColorReference* m_DefaultValue; // 0x10
	Array<ColorUnlockPartData*> m_PossibleValues; // 0x18
}; // size = 0x20

#endif // FBGEN_UnlockableColorCollection_H
