//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCharacterEntityData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamCharacterEntityData_H
#define FBGEN_PamCharacterEntityData_H

#include "Array.h"
#include "CharacterEntityData.h"

class PamCharacterEntityData :
	public CharacterEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B470;
	}
	Array<BoundingBoxData> m_BoundingBoxBones; // 0xe0
	bool m_PamUseRunnersGhostShader; // 0xe8
	bool m_PamGhostInRvColorBurnPass; // 0xe9
	bool m_UseHighPrioAnimationUpdate; // 0xea
	bool m_UseMediumPrioAnimationUpdate; // 0xeb
	bool m_Visible; // 0xec
	bool m_UpdateOnPaused; // 0xed
	unsigned char _0xee[0x2];
}; // size = 0xf0

#endif // FBGEN_PamCharacterEntityData_H
