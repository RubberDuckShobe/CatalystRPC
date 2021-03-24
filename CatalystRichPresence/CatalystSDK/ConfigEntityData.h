//
// Generated with FrostbiteGen by Chod
// File: SDK\ConfigEntityData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConfigEntityData_H
#define FBGEN_ConfigEntityData_H

#include "Realm.h"
#include "ConfigEntityAssetData.h"
#include "EntityData.h"

class ConfigEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899BC0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	ConfigEntityAssetData* m_AssetToOutput; // 0x20
	float m_neededToCreateOuputs; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ConfigEntityData_H
