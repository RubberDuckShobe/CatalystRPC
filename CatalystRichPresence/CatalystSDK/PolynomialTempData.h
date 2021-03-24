//
// Generated with FrostbiteGen by Chod
// File: SDK\PolynomialTempData.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PolynomialTempData_H
#define FBGEN_PolynomialTempData_H

#include "Vec4.h"
struct PolynomialTempData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DA838;
	}
	Vec4 m_Coefficients; // 0x0
	float m_ScaleValue; // 0x10
	float m_MinClamp; // 0x14
	float m_MaxClamp; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_PolynomialTempData_H
