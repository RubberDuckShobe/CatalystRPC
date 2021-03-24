//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterTagList.h
// Created: Wed Mar 10 19:07:00 2021
//

#ifndef FBGEN_EmitterTagList_H
#define FBGEN_EmitterTagList_H

#include "Array.h"
#include "Asset.h"

class EmitterTagList :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAC40;
	}
	Array<EmitterTag*> m_Tags; // 0x18
}; // size = 0x20

#endif // FBGEN_EmitterTagList_H
