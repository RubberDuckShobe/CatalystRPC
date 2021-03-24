//
// Generated with FrostbiteGen by Chod
// File: SDK\OverlayControl.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OverlayControl_H
#define FBGEN_OverlayControl_H

#include "MusicOverlayData.h"
#include "DataContainer.h"

class OverlayControl :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C73E0;
	}
	MusicOverlayData* m_Overlay; // 0x10
	bool m_Sync; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_OverlayControl_H
