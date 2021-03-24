//
// Generated with FrostbiteGen by Chod
// File: SDK\JobThreadAffinity.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JobThreadAffinity_H
#define FBGEN_JobThreadAffinity_H

struct JobThreadAffinity
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B3048;
	}
	bool m_Client; // 0x0
	bool m_Long; // 0x1
	bool m_Medium; // 0x2
	bool m_Short; // 0x3
	bool m_Draw; // 0x4
	bool m_Server; // 0x5
	bool m_Render; // 0x6
	bool m_Audio; // 0x7
}; // size = 0x8

#endif // FBGEN_JobThreadAffinity_H
