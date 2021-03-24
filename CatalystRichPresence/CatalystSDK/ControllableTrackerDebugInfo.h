//
// Generated with FrostbiteGen by Chod
// File: SDK\ControllableTrackerDebugInfo.h
// Created: Wed Mar 10 19:07:32 2021
//

#ifndef FBGEN_ControllableTrackerDebugInfo_H
#define FBGEN_ControllableTrackerDebugInfo_H

#include "Array.h"
struct ControllableTrackerDebugInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7618;
	}
	int m_PositionsCount; // 0x0
	int m_LatestIndex; // 0x4
	Array<Vec3> m_Positions; // 0x8
}; // size = 0x10

#endif // FBGEN_ControllableTrackerDebugInfo_H
