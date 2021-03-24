//
// Generated with FrostbiteGen by Chod
// File: SDK\IntListAsset.h
// Created: Wed Mar 10 19:06:27 2021
//

#ifndef FBGEN_IntListAsset_H
#define FBGEN_IntListAsset_H

#include "Array.h"
#include "ConfigListAsset.h"

class IntListAsset :
	public ConfigListAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899C80;
	}
	Array<IntData> m_IntTypes; // 0x18
}; // size = 0x20

#endif // FBGEN_IntListAsset_H
