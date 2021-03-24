//
// Generated with FrostbiteGen by Chod
// File: SDK\PamVoiceOverDialogTakeMeta.h
// Created: Wed Mar 10 19:03:20 2021
//

#ifndef FBGEN_PamVoiceOverDialogTakeMeta_H
#define FBGEN_PamVoiceOverDialogTakeMeta_H

#include "AntRef.h"
#include "VoiceOverDialogTakeMeta.h"

class PamVoiceOverDialogTakeMeta :
	public VoiceOverDialogTakeMeta // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C3C0;
	}
	AntRef m_FacialAnimation; // 0x10
	float m_AudioDelay; // 0x24
}; // size = 0x28

#endif // FBGEN_PamVoiceOverDialogTakeMeta_H
