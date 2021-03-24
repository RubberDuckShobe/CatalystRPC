//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestTask.h
// Created: Wed Mar 10 19:01:08 2021
//

#ifndef FBGEN_SoundTestTask_H
#define FBGEN_SoundTestTask_H

#include "SoundTestTaskSpec.h"
#include "SoundTestTaskParam.h"
#include "DataContainer.h"

class SoundTestTask :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0BF0;
	}
	SoundTestTaskSpec* m_Spec; // 0x10
	SoundTestTaskParam* m_Param; // 0x18
	float m_StartTime; // 0x20
	unsigned int m_Repetitions; // 0x24
}; // size = 0x28

#endif // FBGEN_SoundTestTask_H
