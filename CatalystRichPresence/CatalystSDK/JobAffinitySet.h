//
// Generated with FrostbiteGen by Chod
// File: SDK\JobAffinitySet.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JobAffinitySet_H
#define FBGEN_JobAffinitySet_H

#include "JobThreadAffinity.h"
struct JobAffinitySet
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B3028;
	}
	JobThreadAffinity m_MainThread; // 0x0
	JobThreadAffinity m_RenderThread; // 0x8
	JobThreadAffinity m_ServerThread; // 0x10
	JobThreadAffinity m_OtherThreads; // 0x18
	JobThreadAffinity m_LowQualityThreads; // 0x20
}; // size = 0x28

#endif // FBGEN_JobAffinitySet_H
