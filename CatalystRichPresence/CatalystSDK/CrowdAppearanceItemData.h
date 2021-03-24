//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdAppearanceItemData.h
// Created: Wed Mar 10 19:07:27 2021
//

#ifndef FBGEN_CrowdAppearanceItemData_H
#define FBGEN_CrowdAppearanceItemData_H

#include "Array.h"
#include "SimpleAppearanceItemData.h"

class CrowdAppearanceItemData :
	public SimpleAppearanceItemData // size = 0x50
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428951C0;
	}
	Array<WeightedTintableTexture> m_TintableTextures; // 0x50
	bool m_HeadTrackingEnabled; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_CrowdAppearanceItemData_H
