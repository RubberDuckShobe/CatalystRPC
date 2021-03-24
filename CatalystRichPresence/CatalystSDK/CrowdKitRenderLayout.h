//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdKitRenderLayout.h
// Created: Wed Mar 10 19:07:27 2021
//

#ifndef FBGEN_CrowdKitRenderLayout_H
#define FBGEN_CrowdKitRenderLayout_H

#include "Array.h"
struct CrowdKitRenderLayout
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894330;
	}
	Array<CrowdPartRenderLayout> m_Parts; // 0x0
	Array<CrowdTextureRenderLayout> m_Textures; // 0x8
}; // size = 0x10

#endif // FBGEN_CrowdKitRenderLayout_H
