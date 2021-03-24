//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainStreamingSettings.h
// Created: Wed Mar 10 19:00:25 2021
//

#ifndef FBGEN_TerrainStreamingSettings_H
#define FBGEN_TerrainStreamingSettings_H

#include "DataContainer.h"

class TerrainStreamingSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A640;
	}
	unsigned int m_DataLoadJobCount; // 0x10
	unsigned int m_ActiveFreeStreamingDataLoadJobCount; // 0x14
	unsigned int m_AdditionalBlurriness; // 0x18
	float m_InvisibleDetailReductionFactor; // 0x1c
	float m_OccludedDetailReductionFactor; // 0x20
	unsigned int m_HeightfieldAtlasSampleCountXFactor; // 0x24
	unsigned int m_HeightfieldAtlasSampleCountYFactor; // 0x28
	unsigned int m_MaskAtlasSampleCountXFactor; // 0x2c
	unsigned int m_MaskAtlasSampleCountYFactor; // 0x30
	unsigned int m_MaskAdditionalBlurriness; // 0x34
	unsigned int m_ColorAtlasSampleCountXFactor; // 0x38
	unsigned int m_ColorAtlasSampleCountYFactor; // 0x3c
	unsigned int m_ColorAdditionalBlurriness; // 0x40
	bool m_LoadOccluderDataEnable; // 0x44
	bool m_KeepPoolFullEnable; // 0x45
	unsigned char _0x46[0x2];
}; // size = 0x48

#endif // FBGEN_TerrainStreamingSettings_H
