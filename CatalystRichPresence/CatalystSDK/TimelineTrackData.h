//
// Generated with FrostbiteGen by Chod
// File: SDK\TimelineTrackData.h
// Created: Wed Mar 10 19:00:14 2021
//

#ifndef FBGEN_TimelineTrackData_H
#define FBGEN_TimelineTrackData_H

#include "Array.h"
#include "GameObjectData.h"

class TimelineTrackData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C3E0;
	}
	Array<TimelineTrackDataConditionsBase*> m_Conditions; // 0x18
	unsigned short m_UpdatePassFlags; // 0x20
	unsigned short m_BucketPreChildrenOrder; // 0x22
	unsigned short m_BucketOrder; // 0x24
	bool m_ExposePins; // 0x26
	bool m_IsDisabled; // 0x27
}; // size = 0x28

#endif // FBGEN_TimelineTrackData_H
