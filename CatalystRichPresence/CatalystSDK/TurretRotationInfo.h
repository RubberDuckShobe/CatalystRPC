//
// Generated with FrostbiteGen by Chod
// File: SDK\TurretRotationInfo.h
// Created: Wed Mar 10 19:00:03 2021
//

#ifndef FBGEN_TurretRotationInfo_H
#define FBGEN_TurretRotationInfo_H

#include "RotationAxis.h"
#include "RotationChannel.h"
struct TurretRotationInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DB68;
	}
	RotationAxis m_RotationAxis; // 0x0
	RotationChannel m_Channel; // 0x4
	float m_MaxRotation; // 0x8
	float m_MinRotation; // 0xc
	float m_PhaseOffset; // 0x10
	bool m_NormalizeRotation; // 0x14
	bool m_InvertRotation; // 0x15
	unsigned char _0x16[0x2];
}; // size = 0x18

#endif // FBGEN_TurretRotationInfo_H
