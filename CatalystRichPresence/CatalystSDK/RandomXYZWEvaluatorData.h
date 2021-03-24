//
// Generated with FrostbiteGen by Chod
// File: SDK\RandomXYZWEvaluatorData.h
// Created: Wed Mar 10 19:02:43 2021
//

#ifndef FBGEN_RandomXYZWEvaluatorData_H
#define FBGEN_RandomXYZWEvaluatorData_H

#include "RandomFrequency.h"
#include "EvaluatorData.h"

class RandomXYZWEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC6E0;
	}
	RandomFrequency m_RandomFrequency; // 0x18
	float m_MaxX; // 0x1c
	float m_MinX; // 0x20
	float m_MaxY; // 0x24
	float m_MinY; // 0x28
	float m_MaxZ; // 0x2c
	float m_MinZ; // 0x30
	float m_MaxW; // 0x34
	float m_MinW; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_RandomXYZWEvaluatorData_H
