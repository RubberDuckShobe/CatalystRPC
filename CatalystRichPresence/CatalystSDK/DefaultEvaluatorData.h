//
// Generated with FrostbiteGen by Chod
// File: SDK\DefaultEvaluatorData.h
// Created: Wed Mar 10 19:07:16 2021
//

#ifndef FBGEN_DefaultEvaluatorData_H
#define FBGEN_DefaultEvaluatorData_H

#include "Vec4.h"
#include "EvaluatorData.h"

class DefaultEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC9E0;
	}
	unsigned char _0x18[0x8];
	Vec4 m_Values; // 0x20
}; // size = 0x30

#endif // FBGEN_DefaultEvaluatorData_H
