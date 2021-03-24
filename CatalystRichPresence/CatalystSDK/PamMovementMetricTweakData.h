//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMovementMetricTweakData.h
// Created: Wed Mar 10 19:04:21 2021
//

#ifndef FBGEN_PamMovementMetricTweakData_H
#define FBGEN_PamMovementMetricTweakData_H

#include "Array.h"
#include "EntityData.h"

class PamMovementMetricTweakData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B4D0;
	}
	Array<FallingDriverSettings*> m_FallingSettings; // 0x18
	Array<SpringboardDriverSettings*> m_SpringboardSettings; // 0x20
}; // size = 0x28

#endif // FBGEN_PamMovementMetricTweakData_H
