//
// Generated with FrostbiteGen by Chod
// File: SDK\FPSCameraData.h
// Created: Wed Mar 10 19:06:50 2021
//

#ifndef FBGEN_FPSCameraData_H
#define FBGEN_FPSCameraData_H

#include "TurnEffectData.h"
#include "BlurEffectData.h"
#include "TargetCameraData.h"

class FPSCameraData :
	public TargetCameraData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817760;
	}
	TurnEffectData m_TurnEffectSettings; // 0x70
	BlurEffectData m_BlurEffectSettings; // 0x90
	float m_FOV; // 0xa8
	unsigned char _0xac[0x4];
}; // size = 0xb0

#endif // FBGEN_FPSCameraData_H
