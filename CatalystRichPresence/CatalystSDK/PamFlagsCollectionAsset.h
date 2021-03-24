//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFlagsCollectionAsset.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFlagsCollectionAsset_H
#define FBGEN_PamFlagsCollectionAsset_H

#include "Array.h"
#include "Asset.h"

class PamFlagsCollectionAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428731E0;
	}
	Array<DebugFlagValue*> m_FlagValues; // 0x18
	Array<DebugCompleteMission*> m_CompleteMissions; // 0x20
	Array<PamFlagsCollectionAsset*> m_AdditionalFlagAssetsToLoad; // 0x28
}; // size = 0x30

#endif // FBGEN_PamFlagsCollectionAsset_H
