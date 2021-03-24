//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionData.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionData_H
#define FBGEN_PamProgressionData_H

#include "PamProgressionFlagGroup.h"
#include "Array.h"
#include "Asset.h"

class PamProgressionData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873600;
	}
	Array<PamProgressionFlagGroup*> m_FlagGroups; // 0x18
	Array<PamProgressionMission*> m_Missions; // 0x20
	PamProgressionFlagGroup* m_SystemGeneratedFlags; // 0x28
	PamProgressionFlagGroup* m_SystemGeneratedMiscCompletionFlags; // 0x30
	PamProgressionFlagGroup* m_SystemGeneratedBronzeCompletionFlags; // 0x38
	PamProgressionFlagGroup* m_SystemGeneratedSilverCompletionFlags; // 0x40
	PamProgressionFlagGroup* m_SystemGeneratedGoldCompletionFlags; // 0x48
	Array<PamProgressionFlagLocation> m_ProgressionFlagLocations; // 0x50
}; // size = 0x58

#endif // FBGEN_PamProgressionData_H
