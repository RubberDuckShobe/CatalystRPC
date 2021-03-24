//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUILensItemStyle.h
// Created: Wed Mar 10 19:03:30 2021
//

#ifndef FBGEN_PamUILensItemStyle_H
#define FBGEN_PamUILensItemStyle_H

#include "Vec3.h"
#include "Asset.h"

class PamUILensItemStyle :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288DB40;
	}
	float m_FlashAlpha; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_LeftPivot; // 0x20
	Vec3 m_RightPivot; // 0x30
	float m_FocusAlpha; // 0x40
	float m_BlurAlpha; // 0x44
	float m_FlashSpeed; // 0x48
	float m_CooldownSpeed; // 0x4c
	float m_BlurSpeed; // 0x50
	unsigned char _0x54[0xc];
}; // size = 0x60

#endif // FBGEN_PamUILensItemStyle_H
