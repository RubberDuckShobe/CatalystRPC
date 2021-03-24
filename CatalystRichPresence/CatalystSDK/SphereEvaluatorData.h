//
// Generated with FrostbiteGen by Chod
// File: SDK\SphereEvaluatorData.h
// Created: Wed Mar 10 19:01:02 2021
//

#ifndef FBGEN_SphereEvaluatorData_H
#define FBGEN_SphereEvaluatorData_H

#include "Vec3.h"
#include "EvaluatorData.h"

class SphereEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC5C0;
	}
	float m_Radius; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Scale; // 0x20
	Vec3 m_Pivot; // 0x30
}; // size = 0x40

#endif // FBGEN_SphereEvaluatorData_H
