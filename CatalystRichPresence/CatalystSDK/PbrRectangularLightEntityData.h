//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrRectangularLightEntityData.h
// Created: Wed Mar 10 19:03:15 2021
//

#ifndef FBGEN_PbrRectangularLightEntityData_H
#define FBGEN_PbrRectangularLightEntityData_H

#include "RectangularLightShape.h"
#include "TextureAsset.h"
#include "PbrAnalyticLightEntityData.h"

class PbrRectangularLightEntityData :
	public PbrAnalyticLightEntityData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841E30;
	}
	RectangularLightShape m_Shape; // 0xf0
	float m_OuterAngle; // 0xf4
	float m_Aspect; // 0xf8
	float m_Width; // 0xfc
	float m_Height; // 0x100
	unsigned char _0x104[0x4];
	TextureAsset* m_Texture; // 0x108
}; // size = 0x110

#endif // FBGEN_PbrRectangularLightEntityData_H
