//
// Generated with FrostbiteGen by Chod
// File: SDK\SplineCurve.h
// Created: Wed Mar 10 19:01:01 2021
//

#ifndef FBGEN_SplineCurve_H
#define FBGEN_SplineCurve_H

#include "Vec4.h"
#include "SplineType.h"
struct SplineCurve
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2038;
	}
	Vec4 m_XValues0; // 0x0
	Vec4 m_XValues1; // 0x10
	Vec4 m_XValues2; // 0x20
	Vec4 m_YValues0; // 0x30
	Vec4 m_YValues1; // 0x40
	Vec4 m_YValues2; // 0x50
	Vec4 m_YValues3; // 0x60
	Vec4 m_GValues0; // 0x70
	Vec4 m_GValues1; // 0x80
	Vec4 m_GValues2; // 0x90
	Vec4 m_GValues3; // 0xa0
	Vec4 m_GValues4; // 0xb0
	Vec4 m_GValues5; // 0xc0
	SplineType m_SplineType; // 0xd0
	unsigned char _0xd4[0xc];
}; // size = 0xe0

#endif // FBGEN_SplineCurve_H
