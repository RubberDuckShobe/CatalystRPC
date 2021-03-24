//
// Generated with FrostbiteGen by Chod
// File: SDK\RotationTransformModifierData.h
// Created: Wed Mar 10 19:02:34 2021
//

#ifndef FBGEN_RotationTransformModifierData_H
#define FBGEN_RotationTransformModifierData_H

#include "TransformModifierData.h"

class RotationTransformModifierData :
	public TransformModifierData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1E40;
	}
	float m_DegreesPerSecond; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_RotationTransformModifierData_H
