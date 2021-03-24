//
// Generated with FrostbiteGen by Chod
// File: SDK\PamChallengeMarkerEntityData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamChallengeMarkerEntityData_H
#define FBGEN_PamChallengeMarkerEntityData_H

#include "PamPlayerStatsScope.h"
#include "PamChallengeCheckpointOrder.h"
#include "PamOnlineIdData.h"
#include "PamSharedContentMarkerEntityData.h"

class PamChallengeMarkerEntityData :
	public PamSharedContentMarkerEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852D00;
	}
	PamPlayerStatsScope* m_AdditionalStatsScope; // 0x80
	PamChallengeCheckpointOrder m_CheckpointOrder; // 0x88
	float m_Time; // 0x8c
	PamOnlineIdData* m_TrackedPlayer; // 0x90
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_PamChallengeMarkerEntityData_H
