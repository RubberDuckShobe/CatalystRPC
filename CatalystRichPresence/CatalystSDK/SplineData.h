//
// Generated with FrostbiteGen by Chod
// File: SDK\SplineData.h
// Created: Wed Mar 10 19:01:01 2021
//

#ifndef FBGEN_SplineData_H
#define FBGEN_SplineData_H

#include "SplineCurve.h"
#include "EvaluatorData.h"

class SplineData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC8C0;
	}
	unsigned char _0x18[0x8];
	SplineCurve m_SplineCurve; // 0x20
}; // size = 0x100

#endif // FBGEN_SplineData_H
