//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlayerData_H
#define FBGEN_PlayerData_H

#include "PlayerViewData.h"
#include "EntryInputActionMapsData.h"
#include "InputActionMappingsData.h"
#include "Asset.h"

class PlayerData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809A70;
	}
	PlayerViewData* m_PlayerView; // 0x18
	EntryInputActionMapsData* m_InputConceptDefinition; // 0x20
	InputActionMappingsData* m_InputMapping; // 0x28
}; // size = 0x30

#endif // FBGEN_PlayerData_H
