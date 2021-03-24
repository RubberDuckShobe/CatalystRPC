//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialGridData.h
// Created: Wed Mar 10 19:06:01 2021
//

#ifndef FBGEN_MaterialGridData_H
#define FBGEN_MaterialGridData_H

#include "MaterialDecl.h"
#include "Array.h"
#include "Asset.h"

class MaterialGridData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA980;
	}
	MaterialDecl m_DefaultMaterial; // 0x18
	unsigned char _0x1c[0x4];
	Array<MaterialDecl> m_MaterialPairs; // 0x20
	Array<unsigned int> m_MaterialIndexMap; // 0x28
	unsigned int m_DefaultMaterialIndex; // 0x30
	unsigned char _0x34[0x4];
	Array<MaterialRelationPropertyPair> m_MaterialProperties; // 0x38
	Array<MaterialInteractionGridRow> m_InteractionGrid; // 0x40
}; // size = 0x48

#endif // FBGEN_MaterialGridData_H
