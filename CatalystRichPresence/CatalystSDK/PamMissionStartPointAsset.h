//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionStartPointAsset.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionStartPointAsset_H
#define FBGEN_PamMissionStartPointAsset_H

#include "Array.h"
#include "Asset.h"

class PamMissionStartPointAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872DC0;
	}
	Array<PamMissionStartPointInfo> m_MissionStartPoints; // 0x18
}; // size = 0x20

#endif // FBGEN_PamMissionStartPointAsset_H
