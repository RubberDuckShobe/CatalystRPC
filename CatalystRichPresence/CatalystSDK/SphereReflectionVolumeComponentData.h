//
// Generated with FrostbiteGen by Chod
// File: SDK\SphereReflectionVolumeComponentData.h
// Created: Wed Mar 10 19:01:01 2021
//

#ifndef FBGEN_SphereReflectionVolumeComponentData_H
#define FBGEN_SphereReflectionVolumeComponentData_H

#include "PbrSphereReflectionVolumeEntityData.h"
#include "ReflectionVolumeComponentData.h"

class SphereReflectionVolumeComponentData :
	public ReflectionVolumeComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821FC0;
	}
	PbrSphereReflectionVolumeEntityData* m_ReflectionVolume; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_SphereReflectionVolumeComponentData_H
