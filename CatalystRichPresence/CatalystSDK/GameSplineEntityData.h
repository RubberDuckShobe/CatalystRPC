//
// Generated with FrostbiteGen by Chod
// File: SDK\GameSplineEntityData.h
// Created: Wed Mar 10 19:06:39 2021
//

#ifndef FBGEN_GameSplineEntityData_H
#define FBGEN_GameSplineEntityData_H

#include "Guid.h"
#include "Array.h"
#include "GameComponentEntityData.h"

class GameSplineEntityData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428106E0;
	}
	Array<Vec3> m_LocalPoints; // 0x80
	Array<Vec3> m_Normals; // 0x88
	Guid m_GameSplineDataGuid; // 0x90
	Array<float> m_NormalizedLengths; // 0xa0
	float m_Length; // 0xa8
	unsigned char _0xac[0x4];
}; // size = 0xb0

#endif // FBGEN_GameSplineEntityData_H
