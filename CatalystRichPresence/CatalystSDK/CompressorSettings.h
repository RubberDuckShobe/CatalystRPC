//
// Generated with FrostbiteGen by Chod
// File: SDK\CompressorSettings.h
// Created: Wed Mar 10 19:07:36 2021
//

#ifndef FBGEN_CompressorSettings_H
#define FBGEN_CompressorSettings_H

#include "DataContainer.h"

class CompressorSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8460;
	}
	float m_Ratio; // 0x10
	float m_Threshold; // 0x14
	float m_Attack; // 0x18
	float m_Release; // 0x1c
}; // size = 0x20

#endif // FBGEN_CompressorSettings_H
