//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomXYZEvaluatorData.h
// Created: Wed Mar 10 19:02:43 2021
//

#ifndef FBGEN_RandomXYZEvaluatorData_H
#define FBGEN_RandomXYZEvaluatorData_H

#include "RandomFrequency.h"
#include "EvaluatorData.h"

class RandomXYZEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC740;
	}
	RandomFrequency m_RandomFrequency; // 0x18
	float m_MaxX; // 0x1c
	float m_MinX; // 0x20
	float m_MaxY; // 0x24
	float m_MinY; // 0x28
	float m_MaxZ; // 0x2c
	float m_MinZ; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_RandomXYZEvaluatorData_H
