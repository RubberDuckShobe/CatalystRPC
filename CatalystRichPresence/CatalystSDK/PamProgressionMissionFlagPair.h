//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionMissionFlagPair.h
// Created: Wed Mar 10 19:04:10 2021
//

#ifndef FBGEN_PamProgressionMissionFlagPair_H
#define FBGEN_PamProgressionMissionFlagPair_H

#include "PamProgressionMission.h"
#include "PamProgressionFlag.h"
#include "Asset.h"

class PamProgressionMissionFlagPair :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873720;
	}
	PamProgressionMission* m_Mission; // 0x18
	PamProgressionFlag* m_Flag; // 0x20
	PamProgressionFlag* m_Flag2; // 0x28
	PamProgressionFlag* m_Flag3; // 0x30
}; // size = 0x38

#endif // FBGEN_PamProgressionMissionFlagPair_H
