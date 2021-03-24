//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineRichPresenceLevelDescriptionComponent.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineRichPresenceLevelDescriptionComponent_H
#define FBGEN_OnlineRichPresenceLevelDescriptionComponent_H

#include "OnlineRichPresenceString.h"
#include "Array.h"
#include "LevelDescriptionComponent.h"
#include "OnlineRichPresenceContextValuePair.h"

class OnlineRichPresenceLevelDescriptionComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E4F0;
	}
	OnlineRichPresenceString* m_RichPresenceString; // 0x10
	Array<OnlineRichPresenceContextValuePair*> m_Contexts; // 0x18
}; // size = 0x20

#endif // FBGEN_OnlineRichPresenceLevelDescriptionComponent_H
