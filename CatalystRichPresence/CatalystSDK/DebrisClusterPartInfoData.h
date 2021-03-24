//
// Generated with FrostbiteGen by Chod
// File: SDK\DebrisClusterPartInfoData.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DebrisClusterPartInfoData_H
#define FBGEN_DebrisClusterPartInfoData_H

#include "Vec3.h"
struct DebrisClusterPartInfoData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D6738;
	}
	Vec3 m_LinearVelocity; // 0x0
	Vec3 m_AngularVelocity; // 0x10
	int m_PartIndex; // 0x20
	int m_NumberOfChildren; // 0x24
	float m_SplitSpeedThreshold; // 0x28
	bool m_SyncRestPosition; // 0x2c
	bool m_SyncContinous; // 0x2d
	bool m_InEffectWorldOnly; // 0x2e
	unsigned char _0x2f[0x1];
}; // size = 0x30

#endif // FBGEN_DebrisClusterPartInfoData_H
