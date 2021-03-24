//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainSettings.h
// Created: Wed Mar 10 19:00:26 2021
//

#ifndef FBGEN_TerrainSettings_H
#define FBGEN_TerrainSettings_H

#include "DataContainer.h"

class TerrainSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A6A0;
	}
	unsigned int m_HeightQueryCacheSize; // 0x10
	unsigned int m_ModifiersCapacity; // 0x14
	unsigned int m_IntersectingModifiersMax; // 0x18
	float m_ModifierSlopeMax; // 0x1c
	float m_ModifierDepthFactor; // 0x20
	unsigned int m_ModifiersAppliedPerFrameMax; // 0x24
	bool m_ModifiersEnable; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_TerrainSettings_H
