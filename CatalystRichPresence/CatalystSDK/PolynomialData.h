//
// Generated with FrostbiteGen by Chod
// File: SDK\PolynomialData.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PolynomialData_H
#define FBGEN_PolynomialData_H

#include "Vec4.h"
#include "EvaluatorData.h"

class PolynomialData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC980;
	}
	float m_ScaleValue; // 0x18
	unsigned char _0x1c[0x4];
	Vec4 m_Coefficients; // 0x20
	float m_MinClamp; // 0x30
	float m_MaxClamp; // 0x34
	unsigned char _0x38[0x8];
}; // size = 0x40

#endif // FBGEN_PolynomialData_H
