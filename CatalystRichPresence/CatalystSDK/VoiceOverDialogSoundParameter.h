//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDialogSoundParameter.h
// Created: Wed Mar 10 18:59:04 2021
//

#ifndef FBGEN_VoiceOverDialogSoundParameter_H
#define FBGEN_VoiceOverDialogSoundParameter_H

#include "VoiceOverValueConnection.h"
#include "AudioGraphParameter.h"
#include "VoiceOverDialogSoundParameterBehavior.h"
struct VoiceOverDialogSoundParameter
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D06E8;
	}
	VoiceOverValueConnection m_Source; // 0x0
	AudioGraphParameter* m_Target; // 0x10
	VoiceOverDialogSoundParameterBehavior m_Behavior; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VoiceOverDialogSoundParameter_H
