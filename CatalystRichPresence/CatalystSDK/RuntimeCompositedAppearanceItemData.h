//
// Generated with FrostbiteGen by Chod
// File: SDK\RuntimeCompositedAppearanceItemData.h
// Created: Wed Mar 10 19:02:33 2021
//

#ifndef FBGEN_RuntimeCompositedAppearanceItemData_H
#define FBGEN_RuntimeCompositedAppearanceItemData_H

#include "Array.h"
#include "DataContainer.h"

class RuntimeCompositedAppearanceItemData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B55B0;
	}
	const char* m_ItemName; // 0x10
	Array<MeshLodPair> m_MeshLodPairs; // 0x18
	Array<MaterialParameters> m_MaterialParameters; // 0x20
	Array<unsigned int> m_IncludeCullTagHashes; // 0x28
	Array<unsigned int> m_ExcludeCullTagHashes; // 0x30
}; // size = 0x38

#endif // FBGEN_RuntimeCompositedAppearanceItemData_H
