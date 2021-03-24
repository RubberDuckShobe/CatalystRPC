//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderCustomizationUnlockPartCollection.h
// Created: Wed Mar 10 19:01:35 2021
//

#ifndef FBGEN_ShaderCustomizationUnlockPartCollection_H
#define FBGEN_ShaderCustomizationUnlockPartCollection_H

#include "Array.h"
#include "DataContainer.h"

class ShaderCustomizationUnlockPartCollection :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811940;
	}
	Array<ObjectBlueprint*> m_MeshBlueprints; // 0x10
	const char* m_ShaderNodeName; // 0x18
	Array<CustomizedMeshMaterialsData> m_MeshMaterials; // 0x20
}; // size = 0x28

#endif // FBGEN_ShaderCustomizationUnlockPartCollection_H
