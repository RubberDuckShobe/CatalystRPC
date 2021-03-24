//
// Generated with FrostbiteGen by Chod
// File: SDK\FriendUpdatedEvent.h
// Created: Wed Mar 10 19:06:42 2021
//

#ifndef FBGEN_FriendUpdatedEvent_H
#define FBGEN_FriendUpdatedEvent_H

#include "PresenceEvent.h"

class FriendUpdatedEvent :
	public PresenceEvent // size = 0x8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428A04C0;
	}
	unsigned char _0x8[0x18];
}; // size = 0x20

#endif // FBGEN_FriendUpdatedEvent_H
