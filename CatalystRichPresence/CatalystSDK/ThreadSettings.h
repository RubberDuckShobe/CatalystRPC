//
// Generated with FrostbiteGen by Chod
// File: SDK\ThreadSettings.h
// Created: Wed Mar 10 19:00:19 2021
//

#ifndef FBGEN_ThreadSettings_H
#define FBGEN_ThreadSettings_H

#include "DataContainer.h"

class ThreadSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B3270;
	}
	int m_ProcessorCount; // 0x10
	int m_MaxProcessorCount; // 0x14
	int m_MaxLiveEditProcessorCount; // 0x18
	int m_MinFreeProcessorCount; // 0x1c
	int m_JobThreadPriority; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ThreadSettings_H
