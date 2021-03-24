//
// Generated with FrostbiteGen by Chod
// File: SDK\RecoilData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_RecoilData_H
#define FBGEN_RecoilData_H

struct RecoilData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D400;
	}
	float m_MaxRecoilAngleX; // 0x0
	float m_MinRecoilAngleX; // 0x4
	float m_MaxRecoilAngleY; // 0x8
	float m_MinRecoilAngleY; // 0xc
	float m_MaxRecoilAngleZ; // 0x10
	float m_MinRecoilAngleZ; // 0x14
	float m_MaxRecoilFov; // 0x18
	float m_MinRecoilFov; // 0x1c
	bool m_RecoilFollowsDispersion; // 0x20
	unsigned char _0x21[0x3];
}; // size = 0x24

#endif // FBGEN_RecoilData_H
