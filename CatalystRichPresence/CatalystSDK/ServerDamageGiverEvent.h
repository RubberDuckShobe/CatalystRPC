//
// Generated with FrostbiteGen by Chod
// File: SDK\ServerDamageGiverEvent.h
// Created: Wed Mar 10 19:02:17 2021
//

#ifndef FBGEN_ServerDamageGiverEvent_H
#define FBGEN_ServerDamageGiverEvent_H

#include "ServerPlayerEvent.h"

class ServerDamageGiverEvent :
	public ServerPlayerEvent // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427FF920;
	}
	unsigned char _0x28[0x60];
}; // size = 0x88

#endif // FBGEN_ServerDamageGiverEvent_H
