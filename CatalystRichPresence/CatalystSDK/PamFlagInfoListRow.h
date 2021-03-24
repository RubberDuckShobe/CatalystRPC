//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFlagInfoListRow.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFlagInfoListRow_H
#define FBGEN_PamFlagInfoListRow_H

#include "LocalizedString.h"
#include "SoundDataAsset.h"
#include "PamListRow.h"

class PamFlagInfoListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AC40;
	}
	LocalizedString* m_HeaderString; // 0x18
	LocalizedString* m_DescriptionString; // 0x20
	const char* m_Extra; // 0x28
	int m_Value; // 0x30
	int m_ValueNeeded; // 0x34
	SoundDataAsset* m_Wave; // 0x38
}; // size = 0x40

#endif // FBGEN_PamFlagInfoListRow_H
