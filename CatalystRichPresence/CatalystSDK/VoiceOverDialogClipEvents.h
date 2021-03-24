//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDialogClipEvents.h
// Created: Wed Mar 10 18:59:04 2021
//

#ifndef FBGEN_VoiceOverDialogClipEvents_H
#define FBGEN_VoiceOverDialogClipEvents_H

#include "DataContainer.h"

class VoiceOverDialogClipEvents :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D40D0;
	}
	unsigned int m_StartedNameHash; // 0x10
	unsigned int m_FinishedNameHash; // 0x14
}; // size = 0x18

#endif // FBGEN_VoiceOverDialogClipEvents_H
