//
// Generated with FrostbiteGen by Chod
// File: SDK\RawFileResourceAsset.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RawFileResourceAsset_H
#define FBGEN_RawFileResourceAsset_H

#include "ResourceRef.h"
#include "RawFileAsset.h"

class RawFileResourceAsset :
	public RawFileAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428095F0;
	}
	ResourceRef m_Resource; // 0x18
}; // size = 0x20

#endif // FBGEN_RawFileResourceAsset_H
