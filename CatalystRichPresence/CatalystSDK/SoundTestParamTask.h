//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundTestParamTask.h
// Created: Wed Mar 10 19:01:09 2021
//

#ifndef FBGEN_SoundTestParamTask_H
#define FBGEN_SoundTestParamTask_H

#include "SoundTestParamBehavior.h"
#include "SoundTestTaskSpec.h"

class SoundTestParamTask :
	public SoundTestTaskSpec // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0D10;
	}
	const char* m_ParamName; // 0x20
	SoundTestParamBehavior m_Behavior; // 0x28
	float m_RangeMin; // 0x2c
	float m_RangeMax; // 0x30
	float m_InitialValue; // 0x34
}; // size = 0x38

#endif // FBGEN_SoundTestParamTask_H
