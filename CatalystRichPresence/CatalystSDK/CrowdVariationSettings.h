//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdVariationSettings.h
// Created: Wed Mar 10 19:07:23 2021
//

#ifndef FBGEN_CrowdVariationSettings_H
#define FBGEN_CrowdVariationSettings_H

#include "CrowdOutfitSet.h"
#include "Asset.h"

class CrowdVariationSettings :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895100;
	}
	float m_MaleProbability; // 0x18
	unsigned char _0x1c[0x4];
	CrowdOutfitSet m_MaleOutfit; // 0x20
	CrowdOutfitSet m_FemaleOutfit; // 0x28
	float m_MinUniformScale; // 0x30
	float m_MaxUniformScale; // 0x34
}; // size = 0x38

#endif // FBGEN_CrowdVariationSettings_H
