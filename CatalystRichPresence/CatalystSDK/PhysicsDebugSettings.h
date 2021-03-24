//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsDebugSettings.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsDebugSettings_H
#define FBGEN_PhysicsDebugSettings_H

#include "DataContainer.h"

class PhysicsDebugSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282ED50;
	}
	unsigned int m_TimingRecursionDepth; // 0x10
	bool m_DebugHingeConstraints; // 0x14
	bool m_UsePhysicsCpuTimers; // 0x15
	bool m_VDBShowsEffectsWorld; // 0x16
	unsigned char _0x17[0x1];
}; // size = 0x18

#endif // FBGEN_PhysicsDebugSettings_H
