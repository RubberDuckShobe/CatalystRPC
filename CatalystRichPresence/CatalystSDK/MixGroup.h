//
// Generated with FrostbiteGen by Chod
// File: SDK\MixGroup.h
// Created: Wed Mar 10 19:05:52 2021
//

#ifndef FBGEN_MixGroup_H
#define FBGEN_MixGroup_H

#include "Array.h"
#include "DataContainer.h"

class MixGroup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D15B0;
	}
	const char* m_Name; // 0x10
	Array<MixGroupPropertyParameters> m_Parameters; // 0x18
	unsigned short m_GroupIndex; // 0x20
	unsigned short m_ParentGroupIndex; // 0x22
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_MixGroup_H
