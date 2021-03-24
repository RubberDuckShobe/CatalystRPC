//
// Generated with FrostbiteGen by Chod
// File: SDK\TargetCameraEntityData.h
// Created: Wed Mar 10 19:00:34 2021
//

#ifndef FBGEN_TargetCameraEntityData_H
#define FBGEN_TargetCameraEntityData_H

#include "LinearTransform.h"
#include "TargetCameraData.h"
#include "CameraEntityBaseData.h"

class TargetCameraEntityData :
	public CameraEntityBaseData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817340;
	}
	LinearTransform m_OffsetTransform; // 0xa0
	TargetCameraData* m_Camera; // 0xe0
	float m_FOV; // 0xe8
	unsigned char _0xec[0x4];
}; // size = 0xf0

#endif // FBGEN_TargetCameraEntityData_H
