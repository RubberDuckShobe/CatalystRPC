//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceBaked3DAs2x2DTexEntityData.h
// Created: Wed Mar 10 19:06:11 2021
//

#ifndef FBGEN_LocalWindForceBaked3DAs2x2DTexEntityData_H
#define FBGEN_LocalWindForceBaked3DAs2x2DTexEntityData_H

#include "Vec3.h"
#include "TextureAsset.h"
#include "LocalWindForceEntityBaseData.h"

class LocalWindForceBaked3DAs2x2DTexEntityData :
	public LocalWindForceEntityBaseData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428427F0;
	}
	Vec3 m_VolumeSliceZXScale; // 0x80
	Vec3 m_VolumeSliceZYScale; // 0x90
	float m_SizeX; // 0xa0
	float m_SizeY; // 0xa4
	float m_SizeZ; // 0xa8
	float m_Attenuation; // 0xac
	TextureAsset* m_VolumeSliceZX; // 0xb0
	TextureAsset* m_VolumeSliceZY; // 0xb8
}; // size = 0xc0

#endif // FBGEN_LocalWindForceBaked3DAs2x2DTexEntityData_H
