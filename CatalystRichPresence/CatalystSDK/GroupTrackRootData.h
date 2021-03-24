//
// Generated with FrostbiteGen by Chod
// File: SDK\GroupTrackRootData.h
// Created: Wed Mar 10 19:06:36 2021
//

#ifndef FBGEN_GroupTrackRootData_H
#define FBGEN_GroupTrackRootData_H

#include "Array.h"
#include "Asset.h"

class GroupTrackRootData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DF90;
	}
	Array<TimelineTrackData*> m_Children; // 0x18
}; // size = 0x20

#endif // FBGEN_GroupTrackRootData_H
