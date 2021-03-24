//
// Generated with FrostbiteGen by Chod
// File: SDK\BoxEvaluatorData.h
// Created: Wed Mar 10 19:08:24 2021
//

#ifndef FBGEN_BoxEvaluatorData_H
#define FBGEN_BoxEvaluatorData_H

#include "Vec3.h"
#include "EvaluatorData.h"

class BoxEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC680;
	}
	unsigned char _0x18[0x8];
	Vec3 m_Dimensions; // 0x20
	Vec3 m_Pivot; // 0x30
}; // size = 0x40

#endif // FBGEN_BoxEvaluatorData_H
