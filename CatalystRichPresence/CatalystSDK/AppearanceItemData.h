//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceItemData.h
// Created: Wed Mar 10 19:08:41 2021
//

#ifndef FBGEN_AppearanceItemData_H
#define FBGEN_AppearanceItemData_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class AppearanceItemData :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B54F0;
	}
	Array<BlueprintBundleReference> m_BlueprintBundleReferences; // 0x18
	Array<const char*> m_AssetNames; // 0x20
	bool m_TerrainShaderNodesEnable; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_AppearanceItemData_H
