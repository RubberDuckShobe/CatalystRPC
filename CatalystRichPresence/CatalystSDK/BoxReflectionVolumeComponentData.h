//
// Generated with FrostbiteGen by Chod
// File: SDK\BoxReflectionVolumeComponentData.h
// Created: Wed Mar 10 19:08:24 2021
//

#ifndef FBGEN_BoxReflectionVolumeComponentData_H
#define FBGEN_BoxReflectionVolumeComponentData_H

#include "PbrBoxReflectionVolumeEntityData.h"
#include "ReflectionVolumeComponentData.h"

class BoxReflectionVolumeComponentData :
	public ReflectionVolumeComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142822020;
	}
	PbrBoxReflectionVolumeEntityData* m_ReflectionVolume; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_BoxReflectionVolumeComponentData_H
