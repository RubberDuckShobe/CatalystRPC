//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestTransformTask.h
// Created: Wed Mar 10 19:01:08 2021
//

#ifndef FBGEN_SoundTestTransformTask_H
#define FBGEN_SoundTestTransformTask_H

#include "Vec3.h"
#include "SoundTestTransformBehavior.h"
#include "SoundTestTaskSpec.h"

class SoundTestTransformTask :
	public SoundTestTaskSpec // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0C50;
	}
	Vec3 m_InitialPosition; // 0x20
	SoundTestTransformBehavior m_Behavior; // 0x30
	bool m_RelativeListener; // 0x34
	unsigned char _0x35[0xb];
}; // size = 0x40

#endif // FBGEN_SoundTestTransformTask_H
