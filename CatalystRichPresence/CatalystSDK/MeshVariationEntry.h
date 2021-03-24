//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshVariationEntry.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MeshVariationEntry_H
#define FBGEN_MeshVariationEntry_H

#include "DataContainer.h"

class MeshVariationEntry :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834190;
	}
	const char* m_VariationName; // 0x10
}; // size = 0x18

#endif // FBGEN_MeshVariationEntry_H
