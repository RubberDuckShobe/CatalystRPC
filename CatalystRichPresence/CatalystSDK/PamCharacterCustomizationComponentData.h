//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCharacterCustomizationComponentData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamCharacterCustomizationComponentData_H
#define FBGEN_PamCharacterCustomizationComponentData_H

#include "Array.h"
#include "PamCustomizeCharacterData.h"
#include "CharacterCustomizationComponentData.h"

class PamCharacterCustomizationComponentData :
	public CharacterCustomizationComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B830;
	}
	Array<AttachableBone> m_AvailableBones; // 0x80
	PamCustomizeCharacterData* m_GameViewCustomization; // 0x88
}; // size = 0x90

#endif // FBGEN_PamCharacterCustomizationComponentData_H
