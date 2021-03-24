//
// Generated with FrostbiteGen by Chod
// File: SDK\GameSplineData.h
// Created: Wed Mar 10 19:06:39 2021
//

#ifndef FBGEN_GameSplineData_H
#define FBGEN_GameSplineData_H

#include "Array.h"
#include "CustomSplineData.h"

class GameSplineData :
	public CustomSplineData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810740;
	}
	Array<Vec3> m_Normals; // 0x28
	int m_NumSamples; // 0x30
	unsigned char _0x34[0x4];
	Array<float> m_Lengths; // 0x38
}; // size = 0x40

#endif // FBGEN_GameSplineData_H
