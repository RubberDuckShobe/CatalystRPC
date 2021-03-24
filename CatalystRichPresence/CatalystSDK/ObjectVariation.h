//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectVariation.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObjectVariation_H
#define FBGEN_ObjectVariation_H

#include "Asset.h"

class ObjectVariation :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7CD0;
	}
	unsigned int m_NameHash; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_ObjectVariation_H
