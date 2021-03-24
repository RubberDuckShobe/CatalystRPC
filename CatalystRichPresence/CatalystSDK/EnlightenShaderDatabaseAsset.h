//
// Generated with FrostbiteGen by Chod
// File: SDK\EnlightenShaderDatabaseAsset.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EnlightenShaderDatabaseAsset_H
#define FBGEN_EnlightenShaderDatabaseAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class EnlightenShaderDatabaseAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834790;
	}
	unsigned int m_NumShaders; // 0x18
	unsigned char _0x1c[0x4];
	ResourceRef m_DatabaseResource; // 0x20
}; // size = 0x28

#endif // FBGEN_EnlightenShaderDatabaseAsset_H
