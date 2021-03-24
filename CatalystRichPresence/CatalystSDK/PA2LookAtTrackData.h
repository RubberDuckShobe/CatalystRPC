//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2LookAtTrackData.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2LookAtTrackData_H
#define FBGEN_PA2LookAtTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class PA2LookAtTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F7300;
	}
	Array<PA2LookAtKeyframe*> m_Keyframes; // 0x28
}; // size = 0x30

#endif // FBGEN_PA2LookAtTrackData_H
