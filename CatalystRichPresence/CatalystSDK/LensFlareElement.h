//
// Generated with FrostbiteGen by Chod
// File: SDK\LensFlareElement.h
// Created: Wed Mar 10 19:06:20 2021
//

#ifndef FBGEN_LensFlareElement_H
#define FBGEN_LensFlareElement_H

#include "Vec4.h"
#include "QualityScalableEnabled.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "Vec2.h"
struct LensFlareElement
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841B10;
	}
	Vec4 m_SizeOccluderCurve; // 0x0
	Vec4 m_SizeScreenPosCurve; // 0x10
	Vec4 m_SizeAngleCurve; // 0x20
	Vec4 m_SizeCamDistCurve; // 0x30
	Vec4 m_AlphaOccluderCurve; // 0x40
	Vec4 m_AlphaScreenPosCurve; // 0x50
	Vec4 m_AlphaAngleCurve; // 0x60
	Vec4 m_AlphaCamDistCurve; // 0x70
	Vec4 m_RotationDistCurve; // 0x80
	QualityScalableEnabled m_Enable; // 0x90
	unsigned char _0x94[0x4];
	SurfaceShaderInstanceDataStruct m_Shader; // 0x98
	float m_RayDistance; // 0xc0
	Vec2 m_Size; // 0xc4
	float m_SizeCamDistMax; // 0xcc
	float m_AlphaCamDistMax; // 0xd0
	float m_RotationLocal; // 0xd4
	float m_RotationDistMultiplier; // 0xd8
	bool m_EnableElement; // 0xdc
	bool m_RotationAlignedToRay; // 0xdd
	unsigned char _0xde[0x2];
}; // size = 0xe0

#endif // FBGEN_LensFlareElement_H
