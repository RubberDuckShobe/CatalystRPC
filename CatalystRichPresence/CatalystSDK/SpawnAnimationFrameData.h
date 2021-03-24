//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnAnimationFrameData.h
// Created: Wed Mar 10 19:01:05 2021
//

#ifndef FBGEN_SpawnAnimationFrameData_H
#define FBGEN_SpawnAnimationFrameData_H

#include "ProcessorData.h"

class SpawnAnimationFrameData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBF00;
	}
	unsigned int m_AnimationFrame; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_SpawnAnimationFrameData_H
