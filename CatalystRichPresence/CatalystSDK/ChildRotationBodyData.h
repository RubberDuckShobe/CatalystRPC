//
// Generated with FrostbiteGen by Chod
// File: SDK\ChildRotationBodyData.h
// Created: Wed Mar 10 19:08:13 2021
//

#ifndef FBGEN_ChildRotationBodyData_H
#define FBGEN_ChildRotationBodyData_H

#include "RotationBodyData.h"

class ChildRotationBodyData :
	public RotationBodyData // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428167A0;
	}
	float m_ForceModifier; // 0x48
	float m_ResetForceModifier; // 0x4c
	float m_ResetForceInputThreshold; // 0x50
	int m_RotationInput; // 0x54
	float m_WorldSpaceLockEfficiency; // 0x58
	bool m_UseLinearInput; // 0x5c
	unsigned char _0x5d[0x3];
}; // size = 0x60

#endif // FBGEN_ChildRotationBodyData_H
