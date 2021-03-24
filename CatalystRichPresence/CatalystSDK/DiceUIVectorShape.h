//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIVectorShape.h
// Created: Wed Mar 10 19:07:10 2021
//

#ifndef FBGEN_DiceUIVectorShape_H
#define FBGEN_DiceUIVectorShape_H

#include "Vec3.h"
#include "DiceUIVectorShapeCapType.h"
#include "DiceUIVectorShapeDrawStyle.h"
#include "DiceUIVectorPath.h"
#include "Array.h"
struct DiceUIVectorShape
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF4B0;
	}
	Vec3 m_Color; // 0x0
	float m_Alpha; // 0x10
	float m_InnerWidth; // 0x14
	float m_OuterWidth; // 0x18
	float m_LineWidth; // 0x1c
	DiceUIVectorShapeCapType m_StartCapType; // 0x20
	DiceUIVectorShapeCapType m_EndCapType; // 0x24
	DiceUIVectorShapeDrawStyle m_DrawStyle; // 0x28
	unsigned char _0x2c[0x4];
	DiceUIVectorPath m_Path; // 0x30
	Array<DiceUIVectorPath> m_InnerPaths; // 0x38
	Array<Vec2> m_TriangulatedPoints; // 0x40
	Array<Vec4> m_TriangulatedColors; // 0x48
	Array<unsigned short> m_TriangulatedIndices; // 0x50
	bool m_SpecifyInnerOuterWidths; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_DiceUIVectorShape_H
