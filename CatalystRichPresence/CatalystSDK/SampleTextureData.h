//
// Generated with FrostbiteGen by Chod
// File: SDK\SampleTextureData.h
// Created: Wed Mar 10 19:02:32 2021
//

#ifndef FBGEN_SampleTextureData_H
#define FBGEN_SampleTextureData_H

#include "Array.h"
#include "Vec3.h"
#include "Vec2.h"
#include "EvaluatorData.h"

class SampleTextureData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC860;
	}
	Array<Vec4> m_GradientData; // 0x18
	Vec3 m_ColorIntensityMax; // 0x20
	Vec3 m_ColorIntensityMin; // 0x30
	Vec2 m_TextureDimensions; // 0x40
	float m_TextureOriginU; // 0x48
	float m_TextureOriginV; // 0x4c
}; // size = 0x50

#endif // FBGEN_SampleTextureData_H
