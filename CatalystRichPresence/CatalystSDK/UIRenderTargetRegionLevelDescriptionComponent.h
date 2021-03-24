//
// Generated with FrostbiteGen by Chod
// File: SDK\UIRenderTargetRegionLevelDescriptionComponent.h
// Created: Wed Mar 10 18:59:49 2021
//

#ifndef FBGEN_UIRenderTargetRegionLevelDescriptionComponent_H
#define FBGEN_UIRenderTargetRegionLevelDescriptionComponent_H

#include "Array.h"
#include "LevelDescriptionComponent.h"

class UIRenderTargetRegionLevelDescriptionComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899740;
	}
	Array<UIRenderTargetAtlasRects> m_Atlases; // 0x10
}; // size = 0x18

#endif // FBGEN_UIRenderTargetRegionLevelDescriptionComponent_H
