//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineRichPresenceString.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineRichPresenceString_H
#define FBGEN_OnlineRichPresenceString_H

#include "DataContainer.h"

class OnlineRichPresenceString :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E610;
	}
	const char* m_Sid; // 0x10
	const char* m_XdpName; // 0x18
	unsigned char m_Index; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_OnlineRichPresenceString_H
