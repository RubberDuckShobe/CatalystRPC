//
// Generated with FrostbiteGen by Chod
// File: SDK\WeightedTintableTexture.h
// Created: Wed Mar 10 18:58:46 2021
//

#ifndef FBGEN_WeightedTintableTexture_H
#define FBGEN_WeightedTintableTexture_H

#include "CrowdTintableTexture.h"
struct WeightedTintableTexture
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428950B8;
	}
	int m_Weight; // 0x0
	unsigned char _0x4[0x4];
	CrowdTintableTexture m_TintableTexture; // 0x8
}; // size = 0x28

#endif // FBGEN_WeightedTintableTexture_H
