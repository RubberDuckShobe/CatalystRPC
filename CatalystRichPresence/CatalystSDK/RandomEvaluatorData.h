//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomEvaluatorData.h
// Created: Wed Mar 10 19:02:45 2021
//

#ifndef FBGEN_RandomEvaluatorData_H
#define FBGEN_RandomEvaluatorData_H

#include "RandomFrequency.h"
#include "EvaluatorData.h"

class RandomEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC7A0;
	}
	RandomFrequency m_RandomFrequency; // 0x18
	float m_Max; // 0x1c
	float m_Min; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_RandomEvaluatorData_H
