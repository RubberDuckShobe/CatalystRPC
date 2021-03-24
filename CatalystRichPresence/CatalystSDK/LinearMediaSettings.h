//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMediaSettings.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinearMediaSettings_H
#define FBGEN_LinearMediaSettings_H

#include "SystemSettings.h"

class LinearMediaSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142824580;
	}
	long m_InlineMessageProcessTimeMaxNS; // 0x20
	long m_PerJobMessageProcessTimeMaxNS; // 0x28
	long m_TurboLoaderChunkPollFrequencyNS; // 0x30
	long m_QueueMemoryReapFrequencyNS; // 0x38
	long m_MemoryRebalanceFrequencyNS; // 0x40
	long m_MemoryRebalanceTimeMaxNS; // 0x48
	unsigned long m_CpuPoolSize; // 0x50
	unsigned long m_GpuPoolSize; // 0x58
	int m_InlineMessageProcessCountMax; // 0x60
	int m_PerJobMessageProcessCountMax; // 0x64
	int m_MemoryRebalanceMaxItemCount; // 0x68
	int m_MessageProcessSpinCount; // 0x6c
	unsigned int m_QueueAffinity; // 0x70
	unsigned int m_ProcessAffinity; // 0x74
	unsigned int m_MaxConcurrentDispatchJobs; // 0x78
	unsigned char m_QueuePriority; // 0x7c
	unsigned char m_ProcessPriority; // 0x7d
	bool m_TrackHeapsS; // 0x7e
	unsigned char _0x7f[0x1];
}; // size = 0x80

#endif // FBGEN_LinearMediaSettings_H
