//
// Generated with FrostbiteGen by Chod
// File: SDK\GameModeViewDefinition.h
// Created: Wed Mar 10 19:06:41 2021
//

#ifndef FBGEN_GameModeViewDefinition_H
#define FBGEN_GameModeViewDefinition_H

#include "Array.h"
#include "Asset.h"

class GameModeViewDefinition :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817580;
	}
	const char* m_GameModeName; // 0x18
	Array<PlayerViewDefinition> m_ViewDefinitions; // 0x20
	float m_MaxVariableFps; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_GameModeViewDefinition_H
