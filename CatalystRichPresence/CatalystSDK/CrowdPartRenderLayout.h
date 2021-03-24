//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPartRenderLayout.h
// Created: Wed Mar 10 19:07:26 2021
//

#ifndef FBGEN_CrowdPartRenderLayout_H
#define FBGEN_CrowdPartRenderLayout_H

#include "Array.h"
struct CrowdPartRenderLayout
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894370;
	}
	unsigned int m_MeshIndex; // 0x0
	int m_TextureIndex; // 0x4
	Array<unsigned int> m_TexturesSliceIndices; // 0x8
}; // size = 0x10

#endif // FBGEN_CrowdPartRenderLayout_H
