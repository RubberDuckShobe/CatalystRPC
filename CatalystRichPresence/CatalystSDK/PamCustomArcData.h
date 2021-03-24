//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomArcData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomArcData_H
#define FBGEN_PamCustomArcData_H

#include "FBPamCustomArcType.h"
#include "PamFindableMovementVolumeData.h"

class PamCustomArcData :
	public PamFindableMovementVolumeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885040;
	}
	float m_ForwardSpeed; // 0x80
	float m_JumpHeight; // 0x84
	int m_NumberOfDebugLines; // 0x88
	FBPamCustomArcType m_ArcType; // 0x8c
	bool m_Bidirectional; // 0x90
	unsigned char _0x91[0xf];
}; // size = 0xa0

#endif // FBGEN_PamCustomArcData_H
