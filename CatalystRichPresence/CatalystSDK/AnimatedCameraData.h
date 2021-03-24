//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimatedCameraData.h
// Created: Wed Mar 10 19:08:46 2021
//

#ifndef FBGEN_AnimatedCameraData_H
#define FBGEN_AnimatedCameraData_H

#include "SkeletonAsset.h"
#include "CameraData.h"

class AnimatedCameraData :
	public CameraData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817640;
	}
	SkeletonAsset* m_Skeleton; // 0x60
	const char* m_CameraBone; // 0x68
	const char* m_FovBone; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_AnimatedCameraData_H
