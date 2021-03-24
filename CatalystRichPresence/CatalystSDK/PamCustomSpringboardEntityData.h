//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomSpringboardEntityData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomSpringboardEntityData_H
#define FBGEN_PamCustomSpringboardEntityData_H

#include "PamFindableMovementVolumeEntityData.h"

class PamCustomSpringboardEntityData :
	public PamFindableMovementVolumeEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884E60;
	}
	float m_ForwardSpeed; // 0xa0
	float m_JumpHeight; // 0xa4
	bool m_Bidirectional; // 0xa8
	unsigned char _0xa9[0x7];
}; // size = 0xb0

#endif // FBGEN_PamCustomSpringboardEntityData_H
