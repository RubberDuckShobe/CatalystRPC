//
// Generated with FrostbiteGen by Chod
// File: SDK\HavokAsset.h
// Created: Wed Mar 10 19:06:35 2021
//

#ifndef FBGEN_HavokAsset_H
#define FBGEN_HavokAsset_H

#include "Array.h"
#include "ResourceRef.h"
#include "Asset.h"

class HavokAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FD10;
	}
	Array<DataContainer*> m_ExternalAssets; // 0x18
	ResourceRef m_Resource; // 0x20
}; // size = 0x28

#endif // FBGEN_HavokAsset_H
