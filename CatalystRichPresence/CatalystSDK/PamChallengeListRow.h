//
// Generated with FrostbiteGen by Chod
// File: SDK\PamChallengeListRow.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamChallengeListRow_H
#define FBGEN_PamChallengeListRow_H

#include "PamSharedContentListRow.h"

class PamChallengeListRow :
	public PamSharedContentListRow // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A2E0;
	}
	int m_NamedChallengeContentId; // 0xb0
	unsigned char _0xb4[0x4];
	const char* m_NamedChallengeId; // 0xb8
	const char* m_NamedChallengeType; // 0xc0
	bool m_IsNamedChallenge; // 0xc8
	bool m_IsSharedContent; // 0xc9
	unsigned char _0xca[0x6];
}; // size = 0xd0

#endif // FBGEN_PamChallengeListRow_H
