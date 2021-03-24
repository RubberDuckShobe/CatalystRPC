//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundDataAsset.h
// Created: Wed Mar 10 19:01:18 2021
//

#ifndef FBGEN_SoundDataAsset_H
#define FBGEN_SoundDataAsset_H

#include "Array.h"
#include "SoundDataPolicy.h"
#include "Asset.h"

class SoundDataAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0890;
	}
	Array<SoundDataChunk> m_Chunks; // 0x18
	SoundDataPolicy* m_Policy; // 0x20
	unsigned char m_PrimePriority; // 0x28
	unsigned char m_RequestPriority; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_SoundDataAsset_H
