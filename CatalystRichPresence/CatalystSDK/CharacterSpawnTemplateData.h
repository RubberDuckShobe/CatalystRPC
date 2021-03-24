//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterSpawnTemplateData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterSpawnTemplateData_H
#define FBGEN_CharacterSpawnTemplateData_H

#include "CustomizeCharacterData.h"
#include "GameSensingTemplateData.h"
#include "GameBehaviourTemplateData.h"
#include "AnimationSpawnTemplate.h"
#include "Array.h"
#include "Asset.h"

class CharacterSpawnTemplateData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820BB0;
	}
	CustomizeCharacterData* m_CustomizeCharacterData; // 0x18
	GameSensingTemplateData* m_Sensing; // 0x20
	GameBehaviourTemplateData* m_Behaviour; // 0x28
	AnimationSpawnTemplate* m_AnimationTemplate; // 0x30
	Array<VoiceOverLabel*> m_VoiceOverLabels; // 0x38
}; // size = 0x40

#endif // FBGEN_CharacterSpawnTemplateData_H
