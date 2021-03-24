//
// Generated with FrostbiteGen by Chod
// File: SDK\BlockListEvent.h
// Created: Wed Mar 10 19:08:29 2021
//

#ifndef FBGEN_BlockListEvent_H
#define FBGEN_BlockListEvent_H

#include "PresenceEvent.h"

class BlockListEvent :
	public PresenceEvent // size = 0x8
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428A0240;
	}
	unsigned char _0x8[0x3b90];
}; // size = 0x3b98

#endif // FBGEN_BlockListEvent_H
