//
// Generated with FrostbiteGen by Chod
// File: SDK\StreamPoolAsset.h
// Created: Wed Mar 10 19:00:51 2021
//

#ifndef FBGEN_StreamPoolAsset_H
#define FBGEN_StreamPoolAsset_H

#include "Array.h"
#include "Asset.h"

class StreamPoolAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D12B0;
	}
	unsigned int m_StreamPoolId; // 0x18
	unsigned char _0x1c[0x4];
	Array<StreamPoolSetup*> m_Setups; // 0x20
}; // size = 0x28

#endif // FBGEN_StreamPoolAsset_H
