//
// Generated with FrostbiteGen by Chod
// File: SDK\RagdollAsset.h
// Created: Wed Mar 10 19:02:45 2021
//

#ifndef FBGEN_RagdollAsset_H
#define FBGEN_RagdollAsset_H

#include "MaterialDecl.h"
#include "ResourceRef.h"
#include "Asset.h"

class RagdollAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FC50;
	}
	MaterialDecl m_MaterialPair; // 0x18
	unsigned char _0x1c[0x4];
	ResourceRef m_Resource; // 0x20
}; // size = 0x28

#endif // FBGEN_RagdollAsset_H
