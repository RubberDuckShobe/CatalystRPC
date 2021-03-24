//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationSignalEntityData.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimationSignalEntityData_H
#define FBGEN_AnimationSignalEntityData_H

#include "AntRef.h"
#include "EntityData.h"

class AnimationSignalEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821030;
	}
	AntRef m_Signal; // 0x18
	AntRef m_IntGameState; // 0x2c
	AntRef m_FloatGameState; // 0x40
	int m_ValueInt; // 0x54
	float m_ValueFloat; // 0x58
	bool m_Reset; // 0x5c
	bool m_Continuous; // 0x5d
	unsigned char _0x5e[0x2];
}; // size = 0x60

#endif // FBGEN_AnimationSignalEntityData_H
