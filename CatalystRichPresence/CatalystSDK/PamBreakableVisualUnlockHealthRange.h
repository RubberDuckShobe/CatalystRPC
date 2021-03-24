//
// Generated with FrostbiteGen by Chod
// File: SDK\PamBreakableVisualUnlockHealthRange.h
// Created: Wed Mar 10 19:05:05 2021
//

#ifndef FBGEN_PamBreakableVisualUnlockHealthRange_H
#define FBGEN_PamBreakableVisualUnlockHealthRange_H

#include "VisualUnlockAsset.h"
struct PamBreakableVisualUnlockHealthRange
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286ACE8;
	}
	VisualUnlockAsset* m_VisualUnlock; // 0x0
	float m_MaxPercentage; // 0x8
	float m_MinPercentage; // 0xc
}; // size = 0x10

#endif // FBGEN_PamBreakableVisualUnlockHealthRange_H
