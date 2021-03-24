//
// Generated with FrostbiteGen by Chod
// File: SDK\Boost.h
// Created: Wed Mar 10 19:08:25 2021
//

#ifndef FBGEN_Boost_H
#define FBGEN_Boost_H

struct Boost
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BD80;
	}
	float m_ForwardStrength; // 0x0
	float m_ReverseStrength; // 0x4
	float m_DissipationTime; // 0x8
	float m_RecoveryTime; // 0xc
	float m_CrawlStrength; // 0x10
	float m_AccelerationScale; // 0x14
}; // size = 0x18

#endif // FBGEN_Boost_H
