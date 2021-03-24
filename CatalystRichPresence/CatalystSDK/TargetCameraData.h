//
// Generated with FrostbiteGen by Chod
// File: SDK\TargetCameraData.h
// Created: Wed Mar 10 19:00:35 2021
//

#ifndef FBGEN_TargetCameraData_H
#define FBGEN_TargetCameraData_H

#include "Array.h"
#include "CameraData.h"

class TargetCameraData :
	public CameraData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428177C0;
	}
	Array<HudData*> m_Hud; // 0x60
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_TargetCameraData_H
