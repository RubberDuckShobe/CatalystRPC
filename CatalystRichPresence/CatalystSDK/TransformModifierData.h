//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformModifierData.h
// Created: Wed Mar 10 19:00:08 2021
//

#ifndef FBGEN_TransformModifierData_H
#define FBGEN_TransformModifierData_H

#include "RotationAxis.h"
#include "Vec3.h"
#include "DataContainer.h"

class TransformModifierData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1EA0;
	}
	float m_RandomTimingToApply; // 0x10
	RotationAxis m_RotationAxis; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_RotationAxisVec; // 0x20
}; // size = 0x30

#endif // FBGEN_TransformModifierData_H
