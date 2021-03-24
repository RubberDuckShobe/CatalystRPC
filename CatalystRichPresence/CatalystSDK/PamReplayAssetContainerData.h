//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReplayAssetContainerData.h
// Created: Wed Mar 10 19:04:06 2021
//

#ifndef FBGEN_PamReplayAssetContainerData_H
#define FBGEN_PamReplayAssetContainerData_H

#include "PamReplayAsset.h"
#include "EntityData.h"

class PamReplayAssetContainerData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C660;
	}
	PamReplayAsset* m_ReplayAsset; // 0x18
}; // size = 0x20

#endif // FBGEN_PamReplayAssetContainerData_H
