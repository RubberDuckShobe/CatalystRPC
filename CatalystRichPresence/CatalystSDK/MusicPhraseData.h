//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPhraseData.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicPhraseData_H
#define FBGEN_MusicPhraseData_H

#include "MusicPhraseSelectionType.h"
#include "MusicParameterData.h"
#include "SynchedFadeData.h"
#include "Array.h"
#include "MusicStreamableData.h"

class MusicPhraseData :
	public MusicStreamableData // size = 0x58
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7500;
	}
	MusicPhraseSelectionType m_SelectionType; // 0x58
	unsigned char _0x5c[0x4];
	MusicParameterData* m_SelectionParameter; // 0x60
	SynchedFadeData* m_RangeFade; // 0x68
	Array<MusicStreamableData*> m_Playables; // 0x70
}; // size = 0x78

#endif // FBGEN_MusicPhraseData_H
