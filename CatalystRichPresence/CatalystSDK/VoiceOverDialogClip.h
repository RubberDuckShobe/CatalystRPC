//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDialogClip.h
// Created: Wed Mar 10 18:59:04 2021
//

#ifndef FBGEN_VoiceOverDialogClip_H
#define FBGEN_VoiceOverDialogClip_H

#include "Array.h"
#include "VoiceOverDialogClipEvents.h"
#include "DataContainer.h"

class VoiceOverDialogClip :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4070;
	}
	float m_MinOffset; // 0x10
	float m_MaxOffset; // 0x14
	Array<VoiceOverDialogTake> m_Takes; // 0x18
	Array<VoiceOverDialogClip*> m_OffsetReferences; // 0x20
	VoiceOverDialogClipEvents* m_Events; // 0x28
	unsigned char m_SequenceIndex; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_VoiceOverDialogClip_H
