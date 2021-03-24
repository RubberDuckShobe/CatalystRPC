//
// Generated with FrostbiteGen by Chod
// File: SDK\SunFlareComponentData.h
// Created: Wed Mar 10 19:00:41 2021
//

#ifndef FBGEN_SunFlareComponentData_H
#define FBGEN_SunFlareComponentData_H

#include "Vec4.h"
#include "Realm.h"
#include "SurfaceShaderBaseAsset.h"
#include "Vec2.h"
#include "VisualEnvironmentComponentData.h"

class SunFlareComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846CA0;
	}
	Vec4 m_Element1SizeOccluderCurve; // 0x80
	Vec4 m_Element1SizeScreenPosCurve; // 0x90
	Vec4 m_Element1AlphaOccluderCurve; // 0xa0
	Vec4 m_Element1AlphaScreenPosCurve; // 0xb0
	Vec4 m_Element1RotationDistCurve; // 0xc0
	Vec4 m_Element2SizeOccluderCurve; // 0xd0
	Vec4 m_Element2SizeScreenPosCurve; // 0xe0
	Vec4 m_Element2AlphaOccluderCurve; // 0xf0
	Vec4 m_Element2AlphaScreenPosCurve; // 0x100
	Vec4 m_Element2RotationDistCurve; // 0x110
	Vec4 m_Element3SizeOccluderCurve; // 0x120
	Vec4 m_Element3SizeScreenPosCurve; // 0x130
	Vec4 m_Element3AlphaOccluderCurve; // 0x140
	Vec4 m_Element3AlphaScreenPosCurve; // 0x150
	Vec4 m_Element3RotationDistCurve; // 0x160
	Vec4 m_Element4SizeOccluderCurve; // 0x170
	Vec4 m_Element4SizeScreenPosCurve; // 0x180
	Vec4 m_Element4AlphaOccluderCurve; // 0x190
	Vec4 m_Element4AlphaScreenPosCurve; // 0x1a0
	Vec4 m_Element4RotationDistCurve; // 0x1b0
	Vec4 m_Element5SizeOccluderCurve; // 0x1c0
	Vec4 m_Element5SizeScreenPosCurve; // 0x1d0
	Vec4 m_Element5AlphaOccluderCurve; // 0x1e0
	Vec4 m_Element5AlphaScreenPosCurve; // 0x1f0
	Vec4 m_Element5RotationDistCurve; // 0x200
	Realm m_Realm; // 0x210
	float m_OccluderSize; // 0x214
	SurfaceShaderBaseAsset* m_Element1Shader; // 0x218
	float m_Element1RayDistance; // 0x220
	Vec2 m_Element1Size; // 0x224
	float m_Element1RotationLocal; // 0x22c
	float m_Element1RotationDistMultiplier; // 0x230
	unsigned char _0x234[0x4];
	SurfaceShaderBaseAsset* m_Element2Shader; // 0x238
	float m_Element2RayDistance; // 0x240
	Vec2 m_Element2Size; // 0x244
	float m_Element2RotationLocal; // 0x24c
	float m_Element2RotationDistMultiplier; // 0x250
	unsigned char _0x254[0x4];
	SurfaceShaderBaseAsset* m_Element3Shader; // 0x258
	float m_Element3RayDistance; // 0x260
	Vec2 m_Element3Size; // 0x264
	float m_Element3RotationLocal; // 0x26c
	float m_Element3RotationDistMultiplier; // 0x270
	unsigned char _0x274[0x4];
	SurfaceShaderBaseAsset* m_Element4Shader; // 0x278
	float m_Element4RayDistance; // 0x280
	Vec2 m_Element4Size; // 0x284
	float m_Element4RotationLocal; // 0x28c
	float m_Element4RotationDistMultiplier; // 0x290
	unsigned char _0x294[0x4];
	SurfaceShaderBaseAsset* m_Element5Shader; // 0x298
	float m_Element5RayDistance; // 0x2a0
	Vec2 m_Element5Size; // 0x2a4
	float m_Element5RotationLocal; // 0x2ac
	float m_Element5RotationDistMultiplier; // 0x2b0
	bool m_Enable; // 0x2b4
	bool m_DebugDrawOccluder; // 0x2b5
	bool m_Element1Enable; // 0x2b6
	bool m_Element1RotationAlignedToRay; // 0x2b7
	bool m_Element2Enable; // 0x2b8
	bool m_Element2RotationAlignedToRay; // 0x2b9
	bool m_Element3Enable; // 0x2ba
	bool m_Element3RotationAlignedToRay; // 0x2bb
	bool m_Element4Enable; // 0x2bc
	bool m_Element4RotationAlignedToRay; // 0x2bd
	bool m_Element5Enable; // 0x2be
	bool m_Element5RotationAlignedToRay; // 0x2bf
}; // size = 0x2c0

#endif // FBGEN_SunFlareComponentData_H
