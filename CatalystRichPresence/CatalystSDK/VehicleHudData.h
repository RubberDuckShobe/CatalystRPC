//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleHudData.h
// Created: Wed Mar 10 18:59:20 2021
//

#ifndef FBGEN_VehicleHudData_H
#define FBGEN_VehicleHudData_H

#include "Vec3.h"
#include "VehicleCustomizationAsset.h"
#include "UIHudIcon.h"
#include "TextureAsset.h"
struct VehicleHudData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D808;
	}
	Vec3 m_CustomizationOffset; // 0x0
	VehicleCustomizationAsset* m_Customization; // 0x10
	UIHudIcon m_MinimapIcon; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_IconName; // 0x20
	TextureAsset* m_Texture; // 0x28
	unsigned int m_VehicleItemHash; // 0x30
	bool m_RotateInMap; // 0x34
	bool m_ShowHealth; // 0x35
	unsigned char _0x36[0xa];
}; // size = 0x40

#endif // FBGEN_VehicleHudData_H
