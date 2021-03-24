//
// Generated with FrostbiteGen by Chod
// File: SDK\PamVersionedRawFileAsset.h
// Created: Wed Mar 10 19:03:20 2021
//

#ifndef FBGEN_PamVersionedRawFileAsset_H
#define FBGEN_PamVersionedRawFileAsset_H

#include "RawFileDataAsset.h"

class PamVersionedRawFileAsset :
	public RawFileDataAsset // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872BE0;
	}
	int m_FileVersion; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamVersionedRawFileAsset_H
