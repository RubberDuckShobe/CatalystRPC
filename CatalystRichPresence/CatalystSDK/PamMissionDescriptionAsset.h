//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionDescriptionAsset.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionDescriptionAsset_H
#define FBGEN_PamMissionDescriptionAsset_H

#include "PamMissionDescription.h"
#include "Asset.h"

class PamMissionDescriptionAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428738A0;
	}
	PamMissionDescription m_MissionDescription; // 0x18
}; // size = 0x68

#endif // FBGEN_PamMissionDescriptionAsset_H
