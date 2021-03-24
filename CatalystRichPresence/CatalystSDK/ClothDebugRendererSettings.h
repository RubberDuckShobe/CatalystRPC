//
// Generated with FrostbiteGen by Chod
// File: SDK\ClothDebugRendererSettings.h
// Created: Wed Mar 10 19:07:41 2021
//

#ifndef FBGEN_ClothDebugRendererSettings_H
#define FBGEN_ClothDebugRendererSettings_H

#include "DataContainer.h"

class ClothDebugRendererSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D2E0;
	}
	float m_RenderDistance; // 0x10
	bool m_RenderWorld; // 0x14
	bool m_RenderWorldStats; // 0x15
	bool m_RenderClothInstanceStats; // 0x16
	bool m_RenderClothInstanceSimMesh; // 0x17
	bool m_RenderClothInstanceRenderMesh; // 0x18
	bool m_RenderClothInstanceCollidables; // 0x19
	bool m_RenderClothInstanceSkinning; // 0x1a
	bool m_RenderClothInstanceParticles; // 0x1b
	bool m_RenderClothInstanceParticlesAabb; // 0x1c
	bool m_RenderClothInstanceOperators; // 0x1d
	bool m_RenderClothWorldPhantoms; // 0x1e
	bool m_RenderWorldCollidables; // 0x1f
}; // size = 0x20

#endif // FBGEN_ClothDebugRendererSettings_H
