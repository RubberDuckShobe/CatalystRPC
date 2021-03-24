//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGraphValueParameterConfigData.h
// Created: Wed Mar 10 19:08:36 2021
//

#ifndef FBGEN_AudioGraphValueParameterConfigData_H
#define FBGEN_AudioGraphValueParameterConfigData_H

#include "AudioGraphParameterConfigData.h"

class AudioGraphValueParameterConfigData :
	public AudioGraphParameterConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1BB0;
	}
	float m_Value; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AudioGraphValueParameterConfigData_H
