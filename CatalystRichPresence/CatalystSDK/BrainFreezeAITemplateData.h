//
// Generated with FrostbiteGen by Chod
// File: SDK\BrainFreezeAITemplateData.h
// Created: Wed Mar 10 19:08:24 2021
//

#ifndef FBGEN_BrainFreezeAITemplateData_H
#define FBGEN_BrainFreezeAITemplateData_H

#include "AISpecialization.h"
#include "CharacterSpawnTemplateData.h"

class BrainFreezeAITemplateData :
	public CharacterSpawnTemplateData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7930;
	}
	AISpecialization* m_AISpecialization; // 0x40
}; // size = 0x48

#endif // FBGEN_BrainFreezeAITemplateData_H
