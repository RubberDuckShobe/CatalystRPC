//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicTransition.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicTransition_H
#define FBGEN_MusicTransition_H

#include "MusicStreamableData.h"
#include "BasicFadeData.h"
#include "OverlayControl.h"
#include "DataContainer.h"

class MusicTransition :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7320;
	}
	MusicStreamableData* m_Source; // 0x10
	MusicStreamableData* m_Destination; // 0x18
	BasicFadeData* m_Fade; // 0x20
	OverlayControl* m_OverlayControl; // 0x28
}; // size = 0x30

#endif // FBGEN_MusicTransition_H
