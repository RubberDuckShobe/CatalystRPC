//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothComponentData.h
// Created: Wed Mar 10 19:07:41 2021
//

#ifndef FBGEN_ClothComponentData_H
#define FBGEN_ClothComponentData_H

#include "Array.h"
#include "ComponentData.h"

class ClothComponentData :
	public ComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6210;
	}
	Array<ClothAssetInstance*> m_Instances; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_ClothComponentData_H
