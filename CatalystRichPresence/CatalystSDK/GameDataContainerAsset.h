//
// Generated with FrostbiteGen by Chod
// File: SDK\GameDataContainerAsset.h
// Created: Wed Mar 10 19:06:41 2021
//

#ifndef FBGEN_GameDataContainerAsset_H
#define FBGEN_GameDataContainerAsset_H

#include "GameDataContainer.h"
#include "Asset.h"

class GameDataContainerAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7550;
	}
	GameDataContainer* m_Data; // 0x18
}; // size = 0x20

#endif // FBGEN_GameDataContainerAsset_H
