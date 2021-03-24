//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineRichPresenceContext.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineRichPresenceContext_H
#define FBGEN_OnlineRichPresenceContext_H

#include "Array.h"
#include "DataContainer.h"
#include "OnlineRichPresenceContextValue.h"

class OnlineRichPresenceContext :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E670;
	}
	const char* m_Name; // 0x10
	const char* m_XdpName; // 0x18
	Array<OnlineRichPresenceContextValue*> m_Values; // 0x20
	unsigned char m_Index; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_OnlineRichPresenceContext_H
