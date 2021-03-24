//
// Generated with FrostbiteGen by Chod
// File: SDK\AntStateAsset.h
// Created: Wed Mar 10 19:08:42 2021
//

#ifndef FBGEN_AntStateAsset_H
#define FBGEN_AntStateAsset_H

#include "Guid.h"
#include "Asset.h"

class AntStateAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2F50;
	}
	Guid m_StreamingGuid; // 0x18
	int m_ChunkSize; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AntStateAsset_H
