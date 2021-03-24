//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomArcEntityData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomArcEntityData_H
#define FBGEN_PamCustomArcEntityData_H

#include "FBPamCustomArcType.h"
#include "PamFindableMovementVolumeEntityData.h"

class PamCustomArcEntityData :
	public PamFindableMovementVolumeEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884FE0;
	}
	float m_ForwardSpeed; // 0xa0
	float m_JumpHeight; // 0xa4
	FBPamCustomArcType m_ArcType; // 0xa8
	bool m_Bidirectional; // 0xac
	unsigned char _0xad[0x3];
}; // size = 0xb0

#endif // FBGEN_PamCustomArcEntityData_H
