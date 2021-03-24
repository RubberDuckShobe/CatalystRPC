//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkRegistryAsset.h
// Created: Wed Mar 10 19:05:35 2021
//

#ifndef FBGEN_NetworkRegistryAsset_H
#define FBGEN_NetworkRegistryAsset_H

#include "Array.h"
#include "Asset.h"

class NetworkRegistryAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA260;
	}
	Array<DataContainer*> m_Objects; // 0x18
	unsigned int m_Checksum; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_NetworkRegistryAsset_H
