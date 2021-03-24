//
// Generated with FrostbiteGen by Chod
// File: SDK\EventTrackData.h
// Created: Wed Mar 10 19:06:52 2021
//

#ifndef FBGEN_EventTrackData_H
#define FBGEN_EventTrackData_H

#include "Array.h"
#include "SchematicPinTrackData.h"

class EventTrackData :
	public SchematicPinTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E0B0;
	}
	Array<EventKeyframe> m_Keyframes; // 0x38
	int m_AntiEventId; // 0x40
	bool m_FireEventsUponSkip; // 0x44
	bool m_UpdatePropertiesAtEvents; // 0x45
	unsigned char _0x46[0x2];
}; // size = 0x48

#endif // FBGEN_EventTrackData_H
