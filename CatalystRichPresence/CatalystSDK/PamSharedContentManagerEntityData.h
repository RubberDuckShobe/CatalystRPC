//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSharedContentManagerEntityData.h
// Created: Wed Mar 10 19:03:52 2021
//

#ifndef FBGEN_PamSharedContentManagerEntityData_H
#define FBGEN_PamSharedContentManagerEntityData_H

#include "PamDynamicContentBlueprintsAsset.h"
#include "LinearTransform.h"
#include "PamDynamicContentDefinitionsAsset.h"
#include "PamNamedChallengesAsset.h"
#include "EntityData.h"

class PamSharedContentManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852E20;
	}
	PamDynamicContentBlueprintsAsset* m_DynamicContentBlueprintsAsset; // 0x18
	LinearTransform m_PlayerTransform; // 0x20
	LinearTransform m_LookAtSurfaceTransform; // 0x60
	PamDynamicContentDefinitionsAsset* m_DynamicContentDefinitionsAsset; // 0xa0
	PamNamedChallengesAsset* m_NamedChallengesAsset; // 0xa8
	bool m_Online; // 0xb0
	bool m_Unlocked; // 0xb1
	bool m_UgcEnabled; // 0xb2
	bool m_InCityAlert; // 0xb3
	bool m_AllowTeleport; // 0xb4
	unsigned char _0xb5[0xb];
}; // size = 0xc0

#endif // FBGEN_PamSharedContentManagerEntityData_H
