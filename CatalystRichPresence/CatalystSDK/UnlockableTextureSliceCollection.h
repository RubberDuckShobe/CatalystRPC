//
// Generated with FrostbiteGen by Chod
// File: SDK\UnlockableTextureSliceCollection.h
// Created: Wed Mar 10 18:59:40 2021
//

#ifndef FBGEN_UnlockableTextureSliceCollection_H
#define FBGEN_UnlockableTextureSliceCollection_H

#include "Array.h"
#include "DataContainer.h"

class UnlockableTextureSliceCollection :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428119A0;
	}
	int m_DefaultValue; // 0x10
	unsigned char _0x14[0x4];
	Array<TextureSliceUnlockPartData*> m_PossibleValues; // 0x18
}; // size = 0x20

#endif // FBGEN_UnlockableTextureSliceCollection_H
