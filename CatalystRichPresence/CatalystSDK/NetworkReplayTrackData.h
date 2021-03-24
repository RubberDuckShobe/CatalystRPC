//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkReplayTrackData.h
// Created: Wed Mar 10 19:05:34 2021
//

#ifndef FBGEN_NetworkReplayTrackData_H
#define FBGEN_NetworkReplayTrackData_H

#include "Array.h"
#include "RecordTrackBaseData.h"

class NetworkReplayTrackData :
	public RecordTrackBaseData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823DC0;
	}
	Array<NetworkReplayKeyframe*> m_Keyframes; // 0x40
}; // size = 0x48

#endif // FBGEN_NetworkReplayTrackData_H
