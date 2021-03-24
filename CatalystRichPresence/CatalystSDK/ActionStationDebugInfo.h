//
// Generated with FrostbiteGen by Chod
// File: SDK\ActionStationDebugInfo.h
// Created: Wed Mar 10 19:08:49 2021
//

#ifndef FBGEN_ActionStationDebugInfo_H
#define FBGEN_ActionStationDebugInfo_H

#include "Vec3.h"
struct ActionStationDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7578;
	}
	Vec3 m_Position; // 0x0
	const char* m_Status; // 0x10
	unsigned char _0x18[0x8];
}; // size = 0x20

#endif // FBGEN_ActionStationDebugInfo_H
