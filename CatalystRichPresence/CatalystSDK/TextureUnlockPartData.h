//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureUnlockPartData.h
// Created: Wed Mar 10 19:00:20 2021
//

#ifndef FBGEN_TextureUnlockPartData_H
#define FBGEN_TextureUnlockPartData_H

#include "TextureReference.h"
#include "DataContainer.h"

class TextureUnlockPartData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811BE0;
	}
	TextureReference* m_TextureReference; // 0x10
}; // size = 0x18

#endif // FBGEN_TextureUnlockPartData_H
