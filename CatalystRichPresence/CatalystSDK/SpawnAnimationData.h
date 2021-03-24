//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnAnimationData.h
// Created: Wed Mar 10 19:01:05 2021
//

#ifndef FBGEN_SpawnAnimationData_H
#define FBGEN_SpawnAnimationData_H

#include "ProcessorData.h"

class SpawnAnimationData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBF60;
	}
	float m_AnimationSpeed; // 0x30
	bool m_BasedOnLifetime; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_SpawnAnimationData_H
