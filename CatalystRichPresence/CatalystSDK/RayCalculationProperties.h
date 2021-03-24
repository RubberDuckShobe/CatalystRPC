//
// Generated with FrostbiteGen by Chod
// File: SDK\RayCalculationProperties.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RayCalculationProperties_H
#define FBGEN_RayCalculationProperties_H

struct RayCalculationProperties
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C1F8;
	}
	const char* m_RayName; // 0x0
	float m_RayWeight; // 0x8
	float m_RayMaxDistanceLimit; // 0xc
	bool m_RayMaxDistanceLimitEnabled; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_RayCalculationProperties_H
