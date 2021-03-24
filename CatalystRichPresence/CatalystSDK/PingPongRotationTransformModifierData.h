//
// Generated with FrostbiteGen by Chod
// File: SDK\PingPongRotationTransformModifierData.h
// Created: Wed Mar 10 19:03:08 2021
//

#ifndef FBGEN_PingPongRotationTransformModifierData_H
#define FBGEN_PingPongRotationTransformModifierData_H

#include "TransformModifierData.h"

class PingPongRotationTransformModifierData :
	public TransformModifierData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1DE0;
	}
	float m_MinAngleInDegrees; // 0x30
	float m_MaxAngleInDegrees; // 0x34
	float m_Frequency; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_PingPongRotationTransformModifierData_H
