//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalForceData.h
// Created: Wed Mar 10 19:06:12 2021
//

#ifndef FBGEN_LocalForceData_H
#define FBGEN_LocalForceData_H

#include "Vec3.h"
#include "ProcessorData.h"

class LocalForceData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBC60;
	}
	float m_PerParticleRandomness; // 0x30
	bool m_EmitterLocalSpaceForce; // 0x34
	unsigned char _0x35[0xb];
	Vec3 m_LocalForce; // 0x40
}; // size = 0x50

#endif // FBGEN_LocalForceData_H
