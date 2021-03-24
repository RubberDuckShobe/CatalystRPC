//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleVisualCustomizationAsset.h
// Created: Wed Mar 10 18:59:17 2021
//

#ifndef FBGEN_VehicleVisualCustomizationAsset_H
#define FBGEN_VehicleVisualCustomizationAsset_H

#include "Array.h"
#include "Asset.h"

class VehicleVisualCustomizationAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428117C0;
	}
	Array<ShaderTextureUnlockPartCollection*> m_TextureUnlockPartCollections; // 0x18
	Array<TextUnlockPartData*> m_TextUnlockParts; // 0x20
}; // size = 0x28

#endif // FBGEN_VehicleVisualCustomizationAsset_H
