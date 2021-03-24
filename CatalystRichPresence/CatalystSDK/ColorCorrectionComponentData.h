//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorCorrectionComponentData.h
// Created: Wed Mar 10 19:07:40 2021
//

#ifndef FBGEN_ColorCorrectionComponentData_H
#define FBGEN_ColorCorrectionComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class ColorCorrectionComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838420;
	}
	Vec3 m_Brightness; // 0x80
	Vec3 m_Contrast; // 0x90
	Vec3 m_Saturation; // 0xa0
	Realm m_Realm; // 0xb0
	float m_Hue; // 0xb4
	TextureAsset* m_ColorGradingTexture; // 0xb8
	float m_ColorGradingMaxHdrValue; // 0xc0
	bool m_Enable; // 0xc4
	bool m_ColorGradingEnable; // 0xc5
	unsigned char _0xc6[0xa];
}; // size = 0xd0

#endif // FBGEN_ColorCorrectionComponentData_H
