//
// Generated with FrostbiteGen by Chod
// File: SDK\DebrisSystemAsset.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DebrisSystemAsset_H
#define FBGEN_DebrisSystemAsset_H

#include "Array.h"
#include "Asset.h"

class DebrisSystemAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6860;
	}
	Array<DebrisHavokInfo> m_HavokMeshes; // 0x18
	int m_HavokMeshCount; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_DebrisSystemAsset_H
