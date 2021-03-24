//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAwardStatus.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAwardStatus_H
#define FBGEN_PamAwardStatus_H

#include "Array.h"
struct PamAwardStatus
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428727E0;
	}
	const char* m_Code; // 0x0
	unsigned int m_CurrentValue; // 0x8
	unsigned int m_OriginalValue; // 0xc
	Array<PamCounterStatus> m_Counters; // 0x10
	bool m_IsCounting; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_PamAwardStatus_H
