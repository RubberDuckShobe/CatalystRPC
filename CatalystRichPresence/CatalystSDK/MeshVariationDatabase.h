//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshVariationDatabase.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MeshVariationDatabase_H
#define FBGEN_MeshVariationDatabase_H

#include "Array.h"
#include "Asset.h"

class MeshVariationDatabase :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834250;
	}
	Array<MeshVariationDatabaseEntry> m_Entries; // 0x18
	Array<MeshVariationDatabaseRedirectEntry> m_RedirectEntries; // 0x20
}; // size = 0x28

#endif // FBGEN_MeshVariationDatabase_H
