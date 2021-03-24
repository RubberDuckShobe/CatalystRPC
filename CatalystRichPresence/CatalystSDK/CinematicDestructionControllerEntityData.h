//
// Generated with FrostbiteGen by Chod
// File: SDK\CinematicDestructionControllerEntityData.h
// Created: Wed Mar 10 19:08:12 2021
//

#ifndef FBGEN_CinematicDestructionControllerEntityData_H
#define FBGEN_CinematicDestructionControllerEntityData_H

#include "CinematicDestructionAsset.h"
#include "Array.h"
#include "EntityData.h"

class CinematicDestructionControllerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142848790;
	}
	CinematicDestructionAsset* m_SourceAsset; // 0x18
	long m_Priority; // 0x20
	Array<CinematicDestructionOutputPipeResult*> m_OutputPipeResults; // 0x28
	float m_ExternalTime; // 0x30
	int m_ActivePlaybackSequence; // 0x34
	Array<CinematicDestructionPlaybackSequence> m_PlaybackSequences; // 0x38
	bool m_Enabled; // 0x40
	bool m_StartPaused; // 0x41
	bool m_AutoStart; // 0x42
	bool m_AutoPause; // 0x43
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_CinematicDestructionControllerEntityData_H
