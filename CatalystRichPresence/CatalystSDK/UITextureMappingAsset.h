//
// Generated with FrostbiteGen by Chod
// File: SDK\UITextureMappingAsset.h
// Created: Wed Mar 10 18:59:47 2021
//

#ifndef FBGEN_UITextureMappingAsset_H
#define FBGEN_UITextureMappingAsset_H

#include "UITextureMappingCompartment.h"
#include "Array.h"
#include "Asset.h"

class UITextureMappingAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F290;
	}
	UITextureMappingCompartment m_Compartment; // 0x18
	unsigned char _0x1c[0x4];
	Array<UITextureMappingOutputEntry> m_Output; // 0x20
	bool m_DisableAtlas; // 0x28
	bool m_ForceAtlas; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_UITextureMappingAsset_H
