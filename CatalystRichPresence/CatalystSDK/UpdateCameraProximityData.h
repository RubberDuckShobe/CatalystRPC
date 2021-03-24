//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateCameraProximityData.h
// Created: Wed Mar 10 18:59:38 2021
//

#ifndef FBGEN_UpdateCameraProximityData_H
#define FBGEN_UpdateCameraProximityData_H

#include "Vec3.h"
#include "ProcessorData.h"

class UpdateCameraProximityData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB360;
	}
	float m_ForwardOffset; // 0x30
	unsigned char _0x34[0xc];
	Vec3 m_Size; // 0x40
	Vec3 m_FadeDistance; // 0x50
}; // size = 0x60

#endif // FBGEN_UpdateCameraProximityData_H
