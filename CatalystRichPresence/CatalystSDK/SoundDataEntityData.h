//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundDataEntityData.h
// Created: Wed Mar 10 19:01:18 2021
//

#ifndef FBGEN_SoundDataEntityData_H
#define FBGEN_SoundDataEntityData_H

#include "Array.h"
#include "EntityData.h"

class SoundDataEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7BC0;
	}
	Array<SoundDataAsset*> m_DataAssets; // 0x18
}; // size = 0x20

#endif // FBGEN_SoundDataEntityData_H
