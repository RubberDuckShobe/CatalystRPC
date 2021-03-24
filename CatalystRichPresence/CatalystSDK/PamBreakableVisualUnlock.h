//
// Generated with FrostbiteGen by Chod
// File: SDK\PamBreakableVisualUnlock.h
// Created: Wed Mar 10 19:05:05 2021
//

#ifndef FBGEN_PamBreakableVisualUnlock_H
#define FBGEN_PamBreakableVisualUnlock_H

#include "Array.h"
struct PamBreakableVisualUnlock
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286ACA8;
	}
	Array<PamBreakableVisualUnlockHealthRange> m_HealthRanges; // 0x0
	Array<PamDamageZone> m_DamageZones; // 0x8
}; // size = 0x10

#endif // FBGEN_PamBreakableVisualUnlock_H
