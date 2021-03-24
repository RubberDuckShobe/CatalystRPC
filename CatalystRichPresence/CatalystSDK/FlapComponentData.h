//
// Generated with FrostbiteGen by Chod
// File: SDK\FlapComponentData.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FlapComponentData_H
#define FBGEN_FlapComponentData_H

#include "RotationAxisEnum.h"
#include "BoneComponentData.h"

class FlapComponentData :
	public BoneComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289A4A0;
	}
	RotationAxisEnum m_RotationAxis; // 0x70
	float m_RotationScale; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_FlapComponentData_H
