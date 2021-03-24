//
// Generated with FrostbiteGen by Chod
// File: SDK\SunFlareEffectState.h
// Created: Wed Mar 10 19:00:41 2021
//

#ifndef FBGEN_SunFlareEffectState_H
#define FBGEN_SunFlareEffectState_H

#include "Vec4.h"
#include "SurfaceShaderBaseAsset.h"
#include "Vec2.h"
#include "DataContainer.h"

class SunFlareEffectState :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428463A0;
	}
	float m_OccluderSize; // 0x10
	unsigned char _0x14[0x4];
	SurfaceShaderBaseAsset* m_Element1Shader; // 0x18
	Vec4 m_Element1SizeOccluderCurve; // 0x20
	Vec4 m_Element1SizeScreenPosCurve; // 0x30
	Vec4 m_Element1AlphaOccluderCurve; // 0x40
	Vec4 m_Element1AlphaScreenPosCurve; // 0x50
	Vec4 m_Element2SizeOccluderCurve; // 0x60
	Vec4 m_Element2SizeScreenPosCurve; // 0x70
	Vec4 m_Element2AlphaOccluderCurve; // 0x80
	Vec4 m_Element2AlphaScreenPosCurve; // 0x90
	Vec4 m_Element3SizeOccluderCurve; // 0xa0
	Vec4 m_Element3SizeScreenPosCurve; // 0xb0
	Vec4 m_Element3AlphaOccluderCurve; // 0xc0
	Vec4 m_Element3AlphaScreenPosCurve; // 0xd0
	Vec4 m_Element4SizeOccluderCurve; // 0xe0
	Vec4 m_Element4SizeScreenPosCurve; // 0xf0
	Vec4 m_Element4AlphaOccluderCurve; // 0x100
	Vec4 m_Element4AlphaScreenPosCurve; // 0x110
	Vec4 m_Element5SizeOccluderCurve; // 0x120
	Vec4 m_Element5SizeScreenPosCurve; // 0x130
	Vec4 m_Element5AlphaOccluderCurve; // 0x140
	Vec4 m_Element5AlphaScreenPosCurve; // 0x150
	float m_Element1RayDistance; // 0x160
	Vec2 m_Element1Size; // 0x164
	unsigned char _0x16c[0x4];
	SurfaceShaderBaseAsset* m_Element2Shader; // 0x170
	float m_Element2RayDistance; // 0x178
	Vec2 m_Element2Size; // 0x17c
	unsigned char _0x184[0x4];
	SurfaceShaderBaseAsset* m_Element3Shader; // 0x188
	float m_Element3RayDistance; // 0x190
	Vec2 m_Element3Size; // 0x194
	unsigned char _0x19c[0x4];
	SurfaceShaderBaseAsset* m_Element4Shader; // 0x1a0
	float m_Element4RayDistance; // 0x1a8
	Vec2 m_Element4Size; // 0x1ac
	unsigned char _0x1b4[0x4];
	SurfaceShaderBaseAsset* m_Element5Shader; // 0x1b8
	float m_Element5RayDistance; // 0x1c0
	Vec2 m_Element5Size; // 0x1c4
	bool m_Enable; // 0x1cc
	bool m_DebugDrawOccluder; // 0x1cd
	bool m_Element1Enable; // 0x1ce
	bool m_Element2Enable; // 0x1cf
	bool m_Element3Enable; // 0x1d0
	bool m_Element4Enable; // 0x1d1
	bool m_Element5Enable; // 0x1d2
	unsigned char _0x1d3[0xd];
}; // size = 0x1e0

#endif // FBGEN_SunFlareEffectState_H
