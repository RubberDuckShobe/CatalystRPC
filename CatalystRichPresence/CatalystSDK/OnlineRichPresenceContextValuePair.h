//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineRichPresenceContextValuePair.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineRichPresenceContextValuePair_H
#define FBGEN_OnlineRichPresenceContextValuePair_H

#include "OnlineRichPresenceContext.h"
#include "OnlineRichPresenceContextValue.h"
#include "DataContainer.h"

class OnlineRichPresenceContextValuePair :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E5B0;
	}
	OnlineRichPresenceContext* m_Context; // 0x10
	OnlineRichPresenceContextValue* m_Value; // 0x18
}; // size = 0x20

#endif // FBGEN_OnlineRichPresenceContextValuePair_H
