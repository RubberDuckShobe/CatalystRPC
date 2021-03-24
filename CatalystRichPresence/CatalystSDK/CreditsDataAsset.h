//
// Generated with FrostbiteGen by Chod
// File: SDK\CreditsDataAsset.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_CreditsDataAsset_H
#define FBGEN_CreditsDataAsset_H

#include "Array.h"
#include "Asset.h"

class CreditsDataAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AF40;
	}
	Array<CreditsSection> m_Sections; // 0x18
	Array<CreditsTextureMapping> m_Textures; // 0x20
}; // size = 0x28

#endif // FBGEN_CreditsDataAsset_H
