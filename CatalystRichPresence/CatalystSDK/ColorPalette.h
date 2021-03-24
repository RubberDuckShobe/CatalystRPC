//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorPalette.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorPalette_H
#define FBGEN_ColorPalette_H

#include "Array.h"
#include "Asset.h"

class ColorPalette :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816CE0;
	}
	const char* m_SourcePath; // 0x18
	Array<Vec3> m_Entries; // 0x20
}; // size = 0x28

#endif // FBGEN_ColorPalette_H
