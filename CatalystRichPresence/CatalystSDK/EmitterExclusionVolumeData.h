//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterExclusionVolumeData.h
// Created: Wed Mar 10 19:07:01 2021
//

#ifndef FBGEN_EmitterExclusionVolumeData_H
#define FBGEN_EmitterExclusionVolumeData_H

#include "SpatialEntityData.h"

class EmitterExclusionVolumeData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DABE0;
	}
	bool m_Enabled; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_EmitterExclusionVolumeData_H
