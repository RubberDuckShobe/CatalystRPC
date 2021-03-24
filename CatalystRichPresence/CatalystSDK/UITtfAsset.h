//
// Generated with FrostbiteGen by Chod
// File: SDK\UITtfAsset.h
// Created: Wed Mar 10 18:59:46 2021
//

#ifndef FBGEN_UITtfAsset_H
#define FBGEN_UITtfAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class UITtfAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F350;
	}
	const char* m_FontFamilyName; // 0x18
	ResourceRef m_FontResource; // 0x20
}; // size = 0x28

#endif // FBGEN_UITtfAsset_H
