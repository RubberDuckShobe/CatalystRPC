//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalizedStringEntityBaseData.h
// Created: Wed Mar 10 19:06:08 2021
//

#ifndef FBGEN_LocalizedStringEntityBaseData_H
#define FBGEN_LocalizedStringEntityBaseData_H

#include "Array.h"
#include "EntityData.h"

class LocalizedStringEntityBaseData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899B00;
	}
	Array<LocalizedStringArgumentType> m_Arguments; // 0x18
	Array<unsigned int> m_ArgumentHashes; // 0x20
}; // size = 0x28

#endif // FBGEN_LocalizedStringEntityBaseData_H
