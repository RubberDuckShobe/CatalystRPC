//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagInfo.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlagInfo_H
#define FBGEN_PamProgressionFlagInfo_H

#include "PamProgressionFlag.h"
#include "SoundDataAsset.h"
#include "DataContainer.h"

class PamProgressionFlagInfo :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428737E0;
	}
	PamProgressionFlag* m_Flag; // 0x10
	const char* m_HeaderSid; // 0x18
	const char* m_DescriptionSid; // 0x20
	const char* m_Extra; // 0x28
	int m_ValueNeeded; // 0x30
	unsigned char _0x34[0x4];
	SoundDataAsset* m_Wave; // 0x38
}; // size = 0x40

#endif // FBGEN_PamProgressionFlagInfo_H
