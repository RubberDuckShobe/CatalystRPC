//
// Generated with FrostbiteGen by Chod
// File: SDK\LoadingMusicBundleAsset.h
// Created: Wed Mar 10 19:06:12 2021
//

#ifndef FBGEN_LoadingMusicBundleAsset_H
#define FBGEN_LoadingMusicBundleAsset_H

#include "Array.h"
#include "Asset.h"

class LoadingMusicBundleAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7140;
	}
	Array<SoundAsset*> m_Assets; // 0x18
	const char* m_UniqueId; // 0x20
	const char* m_SuperBundle; // 0x28
}; // size = 0x30

#endif // FBGEN_LoadingMusicBundleAsset_H
