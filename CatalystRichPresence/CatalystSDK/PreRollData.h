//
// Generated with FrostbiteGen by Chod
// File: SDK\PreRollData.h
// Created: Wed Mar 10 19:03:03 2021
//

#ifndef FBGEN_PreRollData_H
#define FBGEN_PreRollData_H

#include "ProcessorData.h"

class PreRollData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC1A0;
	}
	float m_PreRoll; // 0x30
	float m_UpdatesPerSecond; // 0x34
}; // size = 0x38

#endif // FBGEN_PreRollData_H
