//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMovementExclusionVolume.h
// Created: Wed Mar 10 19:04:21 2021
//

#ifndef FBGEN_PamMovementExclusionVolume_H
#define FBGEN_PamMovementExclusionVolume_H

#include "PamFindableMovementVolumeData.h"

class PamMovementExclusionVolume :
	public PamFindableMovementVolumeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878C60;
	}
	bool m_ExcludeVault; // 0x80
	bool m_ExcludeHeaveUp; // 0x81
	bool m_ExcludeHang; // 0x82
	bool m_ExcludeWallrun; // 0x83
	bool m_ExcludeMagrope; // 0x84
	unsigned char _0x85[0xb];
}; // size = 0x90

#endif // FBGEN_PamMovementExclusionVolume_H
