//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshEmitterAsset.h
// Created: Wed Mar 10 19:05:56 2021
//

#ifndef FBGEN_MeshEmitterAsset_H
#define FBGEN_MeshEmitterAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class MeshEmitterAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAD60;
	}
	ResourceRef m_MeshEmitterResource; // 0x18
}; // size = 0x20

#endif // FBGEN_MeshEmitterAsset_H
