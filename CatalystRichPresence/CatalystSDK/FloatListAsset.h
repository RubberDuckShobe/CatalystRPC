//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatListAsset.h
// Created: Wed Mar 10 19:06:45 2021
//

#ifndef FBGEN_FloatListAsset_H
#define FBGEN_FloatListAsset_H

#include "Array.h"
#include "ConfigListAsset.h"

class FloatListAsset :
	public ConfigListAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899CE0;
	}
	Array<FloatData> m_FloatTypes; // 0x18
}; // size = 0x20

#endif // FBGEN_FloatListAsset_H
