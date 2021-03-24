//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainData.h
// Created: Wed Mar 10 19:00:30 2021
//

#ifndef FBGEN_TerrainData_H
#define FBGEN_TerrainData_H

#include "Array.h"
#include "ResourceRef.h"
#include "Asset.h"

class TerrainData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283AC90;
	}
	Array<TerrainLayerData*> m_TerrainLayers; // 0x18
	ResourceRef m_TerrainStreamingTreeResource; // 0x20
	ResourceRef m_VisualResource; // 0x28
	ResourceRef m_TerrainLayerCombinationsResource; // 0x30
	bool m_DynamicMaskEnable; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_TerrainData_H
