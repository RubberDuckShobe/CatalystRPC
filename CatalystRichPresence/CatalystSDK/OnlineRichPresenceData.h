//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineRichPresenceData.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineRichPresenceData_H
#define FBGEN_OnlineRichPresenceData_H

#include "Array.h"
#include "Asset.h"
#include "OnlineRichPresenceContext.h"
#include "OnlineRichPresenceString.h"

class OnlineRichPresenceData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E550;
	}
	Array<OnlineRichPresenceString*> m_RichPresenceStrings; // 0x18
	Array<OnlineRichPresenceContext*> m_Contexts; // 0x20
}; // size = 0x28

#endif // FBGEN_OnlineRichPresenceData_H
