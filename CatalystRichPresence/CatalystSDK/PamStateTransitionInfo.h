//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStateTransitionInfo.h
// Created: Wed Mar 10 19:03:46 2021
//

#ifndef FBGEN_PamStateTransitionInfo_H
#define FBGEN_PamStateTransitionInfo_H

#include "Array.h"
struct PamStateTransitionInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C338;
	}
	unsigned int m_EventHash; // 0x0
	unsigned char _0x4[0x4];
	Array<unsigned int> m_FromStateHashes; // 0x8
	unsigned int m_ToStateHash; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_PamStateTransitionInfo_H
