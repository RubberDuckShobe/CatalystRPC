//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdTintableTexture.h
// Created: Wed Mar 10 19:07:24 2021
//

#ifndef FBGEN_CrowdTintableTexture_H
#define FBGEN_CrowdTintableTexture_H

#include "TextureAsset.h"
#include "AppearanceCullTag.h"
#include "Array.h"
struct CrowdTintableTexture
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895038;
	}
	TextureAsset* m_DiffuseTexture; // 0x0
	AppearanceCullTag* m_SkinToneTag; // 0x8
	Array<AppearanceCullTag*> m_AvoidSkinTones; // 0x10
	Array<WeightedTintColorGroup> m_TintColors; // 0x18
}; // size = 0x20

#endif // FBGEN_CrowdTintableTexture_H
