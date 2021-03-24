//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionMissionFlagPairList.h
// Created: Wed Mar 10 19:04:10 2021
//

#ifndef FBGEN_PamProgressionMissionFlagPairList_H
#define FBGEN_PamProgressionMissionFlagPairList_H

#include "Array.h"
#include "Asset.h"

class PamProgressionMissionFlagPairList :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428736C0;
	}
	Array<PamProgressionMissionFlagPair*> m_MissionFlagPairs; // 0x18
}; // size = 0x20

#endif // FBGEN_PamProgressionMissionFlagPairList_H
