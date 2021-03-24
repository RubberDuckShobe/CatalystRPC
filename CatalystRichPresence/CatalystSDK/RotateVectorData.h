//
// Generated with FrostbiteGen by Chod
// File: SDK\RotateVectorData.h
// Created: Wed Mar 10 19:02:35 2021
//

#ifndef FBGEN_RotateVectorData_H
#define FBGEN_RotateVectorData_H

#include "EvaluatorData.h"

class RotateVectorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC800;
	}
	float m_Angle; // 0x18
	bool m_InputAffectsPhi; // 0x1c
	bool m_RotateWithinPlane; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_RotateVectorData_H
