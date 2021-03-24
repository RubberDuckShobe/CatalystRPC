//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionMissionList.h
// Created: Wed Mar 10 19:04:10 2021
//

#ifndef FBGEN_PamProgressionMissionList_H
#define FBGEN_PamProgressionMissionList_H

#include "Array.h"
#include "Asset.h"

class PamProgressionMissionList :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873840;
	}
	Array<PamProgressionMission*> m_Missions; // 0x18
}; // size = 0x20

#endif // FBGEN_PamProgressionMissionList_H
