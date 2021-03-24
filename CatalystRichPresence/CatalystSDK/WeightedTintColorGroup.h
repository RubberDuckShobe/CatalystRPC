//
// Generated with FrostbiteGen by Chod
// File: SDK\WeightedTintColorGroup.h
// Created: Wed Mar 10 18:58:46 2021
//

#ifndef FBGEN_WeightedTintColorGroup_H
#define FBGEN_WeightedTintColorGroup_H

#include "CrowdTintColorGroup.h"
#include "Array.h"
struct WeightedTintColorGroup
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428950D8;
	}
	CrowdTintColorGroup m_TintColor; // 0x0
	int m_Weight; // 0x30
	unsigned char _0x34[0x4];
	Array<AppearanceCullTag*> m_AvoidSkinTones; // 0x38
}; // size = 0x40

#endif // FBGEN_WeightedTintColorGroup_H
