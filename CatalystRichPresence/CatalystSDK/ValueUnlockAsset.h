//
// Generated with FrostbiteGen by Chod
// File: SDK\ValueUnlockAsset.h
// Created: Wed Mar 10 18:59:32 2021
//

#ifndef FBGEN_ValueUnlockAsset_H
#define FBGEN_ValueUnlockAsset_H

#include "Array.h"
#include "UnlockAssetBase.h"

class ValueUnlockAsset :
	public UnlockAssetBase // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E7B0;
	}
	Array<UnlockValuePair*> m_UnlockValues; // 0x48
}; // size = 0x50

#endif // FBGEN_ValueUnlockAsset_H
