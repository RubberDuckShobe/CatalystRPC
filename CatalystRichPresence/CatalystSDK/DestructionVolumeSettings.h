//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionVolumeSettings.h
// Created: Wed Mar 10 19:07:13 2021
//

#ifndef FBGEN_DestructionVolumeSettings_H
#define FBGEN_DestructionVolumeSettings_H

#include "DataContainer.h"

class DestructionVolumeSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842B50;
	}
	float m_PixelsPerMeter; // 0x10
	float m_DistanceFieldMultiplier; // 0x14
	int m_TexturePoolSize; // 0x18
	int m_TexturePoolHeadroomSize; // 0x1c
	int m_TexturePoolDefragTransferLimit; // 0x20
	bool m_JobsEnable; // 0x24
	bool m_ForceUpdateEnable; // 0x25
	bool m_DrawDebugVolumes; // 0x26
	bool m_DrawDebugImpacts; // 0x27
	bool m_DrawDebugTexturePool; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_DestructionVolumeSettings_H
