//
// Generated with FrostbiteGen by Chod
// File: SDK\EventSequencerOutEvent.h
// Created: Wed Mar 10 19:06:53 2021
//

#ifndef FBGEN_EventSequencerOutEvent_H
#define FBGEN_EventSequencerOutEvent_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class EventSequencerOutEvent :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2210;
	}
	AudioGraphNodePort m_Out; // 0x10
}; // size = 0x18

#endif // FBGEN_EventSequencerOutEvent_H
