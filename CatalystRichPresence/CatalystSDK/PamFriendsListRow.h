//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFriendsListRow.h
// Created: Wed Mar 10 19:04:37 2021
//

#ifndef FBGEN_PamFriendsListRow_H
#define FBGEN_PamFriendsListRow_H

#include "LocalizedString.h"
#include "PamOnlineIdData.h"
#include "PamListRow.h"

class PamFriendsListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A220;
	}
	LocalizedString* m_LocalizedName; // 0x18
	PamOnlineIdData* m_OnlineId; // 0x20
	int m_OnlineStatus; // 0x28
	bool m_Valid; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_PamFriendsListRow_H
