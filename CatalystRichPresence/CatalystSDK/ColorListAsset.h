//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorListAsset.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorListAsset_H
#define FBGEN_ColorListAsset_H

#include "Array.h"
#include "ConfigListAsset.h"

class ColorListAsset :
	public ConfigListAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899D40;
	}
	Array<ColorData> m_ColorTypes; // 0x18
}; // size = 0x20

#endif // FBGEN_ColorListAsset_H
