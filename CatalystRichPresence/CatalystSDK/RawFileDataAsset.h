//
// Generated with FrostbiteGen by Chod
// File: SDK\RawFileDataAsset.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RawFileDataAsset_H
#define FBGEN_RawFileDataAsset_H

#include "Array.h"
#include "RawFileAsset.h"

class RawFileDataAsset :
	public RawFileAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809590;
	}
	Array<unsigned char> m_RawData; // 0x18
	unsigned int m_Size; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_RawFileDataAsset_H
