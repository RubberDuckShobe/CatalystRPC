//
// Generated with FrostbiteGen by Chod
// File: SDK\PartyEvent.h
// Created: Wed Mar 10 19:03:17 2021
//

#ifndef FBGEN_PartyEvent_H
#define FBGEN_PartyEvent_H

#include "PresenceEvent.h"

class PartyEvent :
	public PresenceEvent // size = 0x8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428A0380;
	}
	unsigned char _0x8[0x30];
}; // size = 0x38

#endif // FBGEN_PartyEvent_H
