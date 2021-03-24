//
// Generated with FrostbiteGen by Chod
// File: SDK\MultiUnlockAsset.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MultiUnlockAsset_H
#define FBGEN_MultiUnlockAsset_H

#include "Array.h"
#include "UnlockAssetBase.h"

class MultiUnlockAsset :
	public UnlockAssetBase // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EA50;
	}
	Array<UnlockAssetBase*> m_Unlocks; // 0x48
}; // size = 0x50

#endif // FBGEN_MultiUnlockAsset_H
