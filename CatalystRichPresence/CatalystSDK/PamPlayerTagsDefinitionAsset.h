//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagsDefinitionAsset.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamPlayerTagsDefinitionAsset_H
#define FBGEN_PamPlayerTagsDefinitionAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamPlayerTagsDefinitionAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878480;
	}
	Array<PamPlayerTagLayer*> m_Layers; // 0x18
	const char* m_BackgroundLayer; // 0x20
}; // size = 0x28

#endif // FBGEN_PamPlayerTagsDefinitionAsset_H
