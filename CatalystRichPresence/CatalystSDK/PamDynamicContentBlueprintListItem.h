//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDynamicContentBlueprintListItem.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDynamicContentBlueprintListItem_H
#define FBGEN_PamDynamicContentBlueprintListItem_H

#include "PamDynamicContentType.h"
#include "SpatialPrefabBlueprint.h"
#include "PamUIMapMarkerDefinition.h"
#include "DataContainer.h"

class PamDynamicContentBlueprintListItem :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873D20;
	}
	unsigned int m_Key; // 0x10
	unsigned char _0x14[0x4];
	const char* m_Name; // 0x18
	PamDynamicContentType m_LogicType; // 0x20
	unsigned char _0x24[0x4];
	SpatialPrefabBlueprint* m_Blueprint; // 0x28
	PamUIMapMarkerDefinition* m_MapMarkerDefinition; // 0x30
}; // size = 0x38

#endif // FBGEN_PamDynamicContentBlueprintListItem_H
