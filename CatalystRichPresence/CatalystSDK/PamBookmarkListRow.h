//
// Generated with FrostbiteGen by Chod
// File: SDK\PamBookmarkListRow.h
// Created: Wed Mar 10 19:05:05 2021
//

#ifndef FBGEN_PamBookmarkListRow_H
#define FBGEN_PamBookmarkListRow_H

#include "LocalizedString.h"
#include "PamOnlineIdData.h"
#include "PamChallengeListRow.h"

class PamBookmarkListRow :
	public PamChallengeListRow // size = 0xd0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A280;
	}
	LocalizedString* m_FollowedPlayerName; // 0xd0
	PamOnlineIdData* m_FollowedPlayerOnlineId; // 0xd8
	bool m_IsFollowedPlayer; // 0xe0
	unsigned char _0xe1[0xf];
}; // size = 0xf0

#endif // FBGEN_PamBookmarkListRow_H
