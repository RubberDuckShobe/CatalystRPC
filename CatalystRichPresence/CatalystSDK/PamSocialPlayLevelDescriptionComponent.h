//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSocialPlayLevelDescriptionComponent.h
// Created: Wed Mar 10 19:03:50 2021
//

#ifndef FBGEN_PamSocialPlayLevelDescriptionComponent_H
#define FBGEN_PamSocialPlayLevelDescriptionComponent_H

#include "PamPlayerTagsDefinitionAsset.h"
#include "Array.h"
#include "LevelDescriptionComponent.h"

class PamSocialPlayLevelDescriptionComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881910;
	}
	PamPlayerTagsDefinitionAsset* m_TagDefinitions; // 0x10
	Array<PamNamedChallengeDatabaseEntry> m_NamedChallenges; // 0x18
}; // size = 0x20

#endif // FBGEN_PamSocialPlayLevelDescriptionComponent_H
