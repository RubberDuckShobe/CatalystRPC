//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderColorUnlockPartCollection.h
// Created: Wed Mar 10 19:01:36 2021
//

#ifndef FBGEN_ShaderColorUnlockPartCollection_H
#define FBGEN_ShaderColorUnlockPartCollection_H

#include "ColorReference.h"
#include "Array.h"
#include "ShaderCustomizationUnlockPartCollection.h"

class ShaderColorUnlockPartCollection :
	public ShaderCustomizationUnlockPartCollection // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428118E0;
	}
	ColorReference* m_DefaultColorReference; // 0x28
	Array<ColorUnlockPartData*> m_UnlockParts; // 0x30
}; // size = 0x38

#endif // FBGEN_ShaderColorUnlockPartCollection_H
