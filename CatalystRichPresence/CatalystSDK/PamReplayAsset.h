//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReplayAsset.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamReplayAsset_H
#define FBGEN_PamReplayAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class PamReplayAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C6C0;
	}
	ResourceRef m_PamReplayResource; // 0x18
}; // size = 0x20

#endif // FBGEN_PamReplayAsset_H
