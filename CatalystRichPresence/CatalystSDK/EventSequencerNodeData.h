//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSequencerNodeData.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventSequencerNodeData_H
#define FBGEN_EventSequencerNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "EventSequencerPlayback.h"
#include "AudioGraphNodeData.h"

class EventSequencerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D21B0;
	}
	AudioGraphNodePort m_Start; // 0x10
	AudioGraphNodePort m_Stop; // 0x18
	AudioGraphNodePort m_Interval; // 0x20
	AudioGraphNodePort m_IntervalVariation; // 0x28
	AudioGraphNodePort m_Repeat; // 0x30
	AudioGraphNodePort m_RepeatVariation; // 0x38
	Array<EventSequencerOutEvent*> m_OutEvents; // 0x40
	EventSequencerPlayback m_Playback; // 0x48
	bool m_IgnoreFirstInterval; // 0x4c
	unsigned char _0x4d[0x3];
}; // size = 0x50

#endif // FBGEN_EventSequencerNodeData_H
