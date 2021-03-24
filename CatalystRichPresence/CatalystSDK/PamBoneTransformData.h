//
// Generated with FrostbiteGen by Chod
// File: SDK\PamBoneTransformData.h
// Created: Wed Mar 10 19:05:05 2021
//

#ifndef FBGEN_PamBoneTransformData_H
#define FBGEN_PamBoneTransformData_H

#include "EntityData.h"

class PamBoneTransformData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881310;
	}
	int m_BoneId; // 0x18
	bool m_StartReadingOnCreated; // 0x1c
	bool m_UseLocalSpaceForTransform; // 0x1d
	bool m_UseLocalSpaceForVelocity; // 0x1e
	unsigned char _0x1f[0x1];
}; // size = 0x20

#endif // FBGEN_PamBoneTransformData_H
