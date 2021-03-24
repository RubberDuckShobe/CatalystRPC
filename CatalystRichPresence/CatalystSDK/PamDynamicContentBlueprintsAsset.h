//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDynamicContentBlueprintsAsset.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDynamicContentBlueprintsAsset_H
#define FBGEN_PamDynamicContentBlueprintsAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamDynamicContentBlueprintsAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873C60;
	}
	Array<PamDynamicContentBlueprintListItem*> m_Prefabs; // 0x18
}; // size = 0x20

#endif // FBGEN_PamDynamicContentBlueprintsAsset_H
