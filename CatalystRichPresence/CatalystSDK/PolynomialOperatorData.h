//
// Generated with FrostbiteGen by Chod
// File: SDK\PolynomialOperatorData.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PolynomialOperatorData_H
#define FBGEN_PolynomialOperatorData_H

#include "PolynomialOperation.h"
#include "PolynomialTempData.h"
#include "EvaluatorData.h"

class PolynomialOperatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC920;
	}
	PolynomialOperation m_Operation; // 0x18
	unsigned char _0x1c[0x4];
	PolynomialTempData m_FirstOperand; // 0x20
	PolynomialTempData m_SecondOperand; // 0x40
	float m_MinClampResult; // 0x60
	float m_MaxClampResult; // 0x64
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_PolynomialOperatorData_H
