//
// Generated with FrostbiteGen by Chod
// File: SDK\NearTargetDetonationData.h
// Created: Wed Mar 10 19:05:39 2021
//

#ifndef FBGEN_NearTargetDetonationData_H
#define FBGEN_NearTargetDetonationData_H

struct NearTargetDetonationData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D480;
	}
	float m_DetonationRadius; // 0x0
	float m_MaxDetonationDelay; // 0x4
	float m_MinDetonationDelay; // 0x8
	bool m_DetonateNearTarget; // 0xc
	unsigned char _0xd[0x3];
}; // size = 0x10

#endif // FBGEN_NearTargetDetonationData_H
