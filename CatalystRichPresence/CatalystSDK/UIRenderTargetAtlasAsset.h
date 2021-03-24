//
// Generated with FrostbiteGen by Chod
// File: SDK\UIRenderTargetAtlasAsset.h
// Created: Wed Mar 10 18:59:49 2021
//

#ifndef FBGEN_UIRenderTargetAtlasAsset_H
#define FBGEN_UIRenderTargetAtlasAsset_H

#include "Vec2.h"
#include "DataContainerPolicyAsset.h"

class UIRenderTargetAtlasAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899860;
	}
	Vec2 m_Size; // 0x18
	unsigned int m_AtlasId; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_UIRenderTargetAtlasAsset_H
