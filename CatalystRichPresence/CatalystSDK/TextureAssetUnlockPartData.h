//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureAssetUnlockPartData.h
// Created: Wed Mar 10 19:00:22 2021
//

#ifndef FBGEN_TextureAssetUnlockPartData_H
#define FBGEN_TextureAssetUnlockPartData_H

#include "TextureAsset.h"
#include "DataContainer.h"

class TextureAssetUnlockPartData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811B80;
	}
	TextureAsset* m_Texture; // 0x10
}; // size = 0x18

#endif // FBGEN_TextureAssetUnlockPartData_H
