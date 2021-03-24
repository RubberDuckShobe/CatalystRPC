//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomSpringboardData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomSpringboardData_H
#define FBGEN_PamCustomSpringboardData_H

#include "PamFindableMovementVolumeData.h"

class PamCustomSpringboardData :
	public PamFindableMovementVolumeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884EC0;
	}
	float m_ForwardSpeed; // 0x80
	float m_JumpHeight; // 0x84
	int m_NumberOfDebugLines; // 0x88
	bool m_Bidirectional; // 0x8c
	unsigned char _0x8d[0x3];
}; // size = 0x90

#endif // FBGEN_PamCustomSpringboardData_H
