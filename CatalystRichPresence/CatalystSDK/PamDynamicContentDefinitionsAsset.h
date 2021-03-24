//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDynamicContentDefinitionsAsset.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDynamicContentDefinitionsAsset_H
#define FBGEN_PamDynamicContentDefinitionsAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamDynamicContentDefinitionsAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873C00;
	}
	Array<PamDynamicContentDefinition*> m_ContentDefinitions; // 0x18
	float m_GlobalSpatialFilterDistance; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamDynamicContentDefinitionsAsset_H
