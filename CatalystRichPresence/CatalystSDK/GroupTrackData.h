//
// Generated with FrostbiteGen by Chod
// File: SDK\GroupTrackData.h
// Created: Wed Mar 10 19:06:36 2021
//

#ifndef FBGEN_GroupTrackData_H
#define FBGEN_GroupTrackData_H

#include "GroupTrackRootData.h"
#include "TimelineTrackData.h"

class GroupTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DFF0;
	}
	GroupTrackRootData* m_RootData; // 0x28
}; // size = 0x30

#endif // FBGEN_GroupTrackData_H
