//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformInterpolatorEntityData.h
// Created: Wed Mar 10 19:00:09 2021
//

#ifndef FBGEN_TransformInterpolatorEntityData_H
#define FBGEN_TransformInterpolatorEntityData_H

#include "LinearTransform.h"
#include "PropertyInterpolatorEntityData.h"

class TransformInterpolatorEntityData :
	public PropertyInterpolatorEntityData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899920;
	}
	bool m_UseRealTimeClock; // 0x28
	unsigned char _0x29[0x7];
	LinearTransform m_In; // 0x30
	LinearTransform m_DefaultValue; // 0x70
}; // size = 0xb0

#endif // FBGEN_TransformInterpolatorEntityData_H
