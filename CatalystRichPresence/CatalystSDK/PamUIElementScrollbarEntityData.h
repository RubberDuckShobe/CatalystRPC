//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementScrollbarEntityData.h
// Created: Wed Mar 10 19:03:33 2021
//

#ifndef FBGEN_PamUIElementScrollbarEntityData_H
#define FBGEN_PamUIElementScrollbarEntityData_H

#include "PamUIDynamicElementEntityData.h"

class PamUIElementScrollbarEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888DE0;
	}
	float m_ResetGrabDistance; // 0x110
	float m_MinSliderSize; // 0x114
	float m_MaxValue; // 0x118
	float m_MinValue; // 0x11c
	float m_Value; // 0x120
	float m_SmallJumpValue; // 0x124
	float m_LargeJumpValue; // 0x128
	bool m_DynamicSliderSize; // 0x12c
	bool m_IntegerValues; // 0x12d
	bool m_Vertical; // 0x12e
	unsigned char _0x12f[0x1];
}; // size = 0x130

#endif // FBGEN_PamUIElementScrollbarEntityData_H
