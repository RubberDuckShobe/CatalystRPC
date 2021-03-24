//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicOverlayData.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicOverlayData_H
#define FBGEN_MusicOverlayData_H

#include "Array.h"
#include "MusicPlayableData.h"

class MusicOverlayData :
	public MusicPlayableData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C74A0;
	}
	Array<MusicOverlayVariation> m_Variations; // 0x38
}; // size = 0x40

#endif // FBGEN_MusicOverlayData_H
