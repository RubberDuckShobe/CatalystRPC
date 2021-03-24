//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceBaked3DAs2x2DTexComponentData.h
// Created: Wed Mar 10 19:06:11 2021
//

#ifndef FBGEN_LocalWindForceBaked3DAs2x2DTexComponentData_H
#define FBGEN_LocalWindForceBaked3DAs2x2DTexComponentData_H

#include "Vec3.h"
#include "TextureAsset.h"
#include "LocalWindForceComponentBaseData.h"

class LocalWindForceBaked3DAs2x2DTexComponentData :
	public LocalWindForceComponentBaseData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F7120;
	}
	Vec3 m_VolumeSliceZXScale; // 0x90
	Vec3 m_VolumeSliceZYScale; // 0xa0
	float m_SizeX; // 0xb0
	float m_SizeY; // 0xb4
	float m_SizeZ; // 0xb8
	float m_Attenuation; // 0xbc
	TextureAsset* m_VolumeSliceZX; // 0xc0
	TextureAsset* m_VolumeSliceZY; // 0xc8
}; // size = 0xd0

#endif // FBGEN_LocalWindForceBaked3DAs2x2DTexComponentData_H
