//
// Generated with FrostbiteGen by Chod
// File: SDK\ImpactSoundData.h
// Created: Wed Mar 10 19:06:31 2021
//

#ifndef FBGEN_ImpactSoundData_H
#define FBGEN_ImpactSoundData_H

struct ImpactSoundData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884A78;
	}
	const char* m_ImpactName; // 0x0
	int m_ImpactId; // 0x8
	unsigned char _0xc[0x4];
	const char* m_ClosestBone; // 0x10
	int m_ClosestBoneId; // 0x18
	int m_EventHash; // 0x1c
}; // size = 0x20

#endif // FBGEN_ImpactSoundData_H
