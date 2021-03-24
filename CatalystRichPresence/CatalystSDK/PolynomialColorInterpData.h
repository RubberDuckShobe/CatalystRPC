//
// Generated with FrostbiteGen by Chod
// File: SDK\PolynomialColorInterpData.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PolynomialColorInterpData_H
#define FBGEN_PolynomialColorInterpData_H

#include "Vec3.h"
#include "Vec4.h"
#include "EvaluatorData.h"

class PolynomialColorInterpData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC380;
	}
	unsigned char _0x18[0x8];
	Vec3 m_Color0; // 0x20
	Vec3 m_Color1; // 0x30
	Vec4 m_Coefficients; // 0x40
}; // size = 0x50

#endif // FBGEN_PolynomialColorInterpData_H
