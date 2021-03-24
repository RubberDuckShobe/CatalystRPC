//
// Generated with FrostbiteGen by Chod
// File: SDK\UIRenderTargetRegionAsset.h
// Created: Wed Mar 10 18:59:49 2021
//

#ifndef FBGEN_UIRenderTargetRegionAsset_H
#define FBGEN_UIRenderTargetRegionAsset_H

#include "DataContainerPolicyAsset.h"

class UIRenderTargetRegionAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899800;
	}
	unsigned int m_AtlasId; // 0x18
	unsigned int m_RegionId; // 0x1c
}; // size = 0x20

#endif // FBGEN_UIRenderTargetRegionAsset_H
