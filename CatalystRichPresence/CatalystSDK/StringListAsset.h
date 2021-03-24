//
// Generated with FrostbiteGen by Chod
// File: SDK\StringListAsset.h
// Created: Wed Mar 10 19:00:49 2021
//

#ifndef FBGEN_StringListAsset_H
#define FBGEN_StringListAsset_H

#include "Array.h"
#include "ConfigListAsset.h"

class StringListAsset :
	public ConfigListAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899C20;
	}
	Array<StringData> m_StringTypes; // 0x18
}; // size = 0x20

#endif // FBGEN_StringListAsset_H
