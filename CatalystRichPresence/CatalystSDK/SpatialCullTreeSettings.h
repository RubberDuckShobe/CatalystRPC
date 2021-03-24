//
// Generated with FrostbiteGen by Chod
// File: SDK\SpatialCullTreeSettings.h
// Created: Wed Mar 10 19:01:06 2021
//

#ifndef FBGEN_SpatialCullTreeSettings_H
#define FBGEN_SpatialCullTreeSettings_H

#include "SpatialCullTreeSettingsConst.h"

class SpatialCullTreeSettings :
	public SpatialCullTreeSettingsConst // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428401B0;
	}
	int m_OverridePrecomputedExtrusionLengthIndex; // 0x38
	unsigned char _0x3c[0x4];
	const char* m_DrawTreeFilter; // 0x40
	int m_DrawTreeGridIndex; // 0x48
	int m_DrawTreeDepthMin; // 0x4c
	int m_DrawTreeDepthMax; // 0x50
	float m_DrawHighlightBoundingBoxAreaMax; // 0x54
	float m_DrawHighlightCullAreaMax; // 0x58
	bool m_DrawTree; // 0x5c
	bool m_DrawTreeContents; // 0x5d
	bool m_DrawTreeNodes; // 0x5e
	bool m_DrawAllNames; // 0x5f
	bool m_DrawTreeContentsPositions; // 0x60
	bool m_DrawTreeContentsCompressed; // 0x61
	bool m_DrawPrecomputedExtrusionLengths; // 0x62
	bool m_DrawHighlightMissingExtrusionLengths; // 0x63
	bool m_DrawHighlightPrecomputeOcclusion; // 0x64
	bool m_ForceRecompressEntities; // 0x65
	unsigned char _0x66[0x2];
}; // size = 0x68

#endif // FBGEN_SpatialCullTreeSettings_H
