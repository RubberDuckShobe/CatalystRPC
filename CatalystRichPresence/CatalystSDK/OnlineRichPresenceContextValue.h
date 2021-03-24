//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineRichPresenceContextValue.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineRichPresenceContextValue_H
#define FBGEN_OnlineRichPresenceContextValue_H

#include "DataContainer.h"

class OnlineRichPresenceContextValue :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E6D0;
	}
	const char* m_Sid; // 0x10
	const char* m_Key; // 0x18
	const char* m_XdpName; // 0x20
	unsigned char m_Index; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_OnlineRichPresenceContextValue_H
