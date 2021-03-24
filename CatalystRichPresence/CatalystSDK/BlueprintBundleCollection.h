//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundleCollection.h
// Created: Wed Mar 10 19:08:29 2021
//

#ifndef FBGEN_BlueprintBundleCollection_H
#define FBGEN_BlueprintBundleCollection_H

#include "Array.h"
#include "Asset.h"

class BlueprintBundleCollection :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817B20;
	}
	Array<BlueprintBundleReference> m_Bundles; // 0x18
}; // size = 0x20

#endif // FBGEN_BlueprintBundleCollection_H
