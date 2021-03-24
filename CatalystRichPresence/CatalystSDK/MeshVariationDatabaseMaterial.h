//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshVariationDatabaseMaterial.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MeshVariationDatabaseMaterial_H
#define FBGEN_MeshVariationDatabaseMaterial_H

#include "MeshMaterial.h"
#include "MeshMaterialVariation.h"
#include "Array.h"
struct MeshVariationDatabaseMaterial
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834090;
	}
	MeshMaterial* m_Material; // 0x0
	MeshMaterialVariation* m_MaterialVariation; // 0x8
	Array<TextureShaderParameter> m_TextureParameters; // 0x10
}; // size = 0x18

#endif // FBGEN_MeshVariationDatabaseMaterial_H
