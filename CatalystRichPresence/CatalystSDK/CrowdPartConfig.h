//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPartConfig.h
// Created: Wed Mar 10 19:07:26 2021
//

#ifndef FBGEN_CrowdPartConfig_H
#define FBGEN_CrowdPartConfig_H

#include "MeshAsset.h"
#include "Array.h"
struct CrowdPartConfig
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428943D0;
	}
	MeshAsset* m_Mesh; // 0x0
	Array<TextureAsset*> m_Textures; // 0x8
	bool m_HeadTrackingEnabled; // 0x10
	bool m_Loaded; // 0x11
	unsigned char _0x12[0x6];
}; // size = 0x18

#endif // FBGEN_CrowdPartConfig_H
