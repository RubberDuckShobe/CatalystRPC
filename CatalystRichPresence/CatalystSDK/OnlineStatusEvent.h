//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineStatusEvent.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineStatusEvent_H
#define FBGEN_OnlineStatusEvent_H

#include "PresenceEvent.h"

class OnlineStatusEvent :
	public PresenceEvent // size = 0x8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428A03D0;
	}
	unsigned char _0x8[0x8];
}; // size = 0x10

#endif // FBGEN_OnlineStatusEvent_H
