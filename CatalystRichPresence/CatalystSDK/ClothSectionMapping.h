//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothSectionMapping.h
// Created: Wed Mar 10 19:07:41 2021
//

#ifndef FBGEN_ClothSectionMapping_H
#define FBGEN_ClothSectionMapping_H

#include "Array.h"
struct ClothSectionMapping
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BF98;
	}
	const char* m_ClothMeshName; // 0x0
	Array<unsigned int> m_SubsetIds; // 0x8
	unsigned int m_LodIndex; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_ClothSectionMapping_H
