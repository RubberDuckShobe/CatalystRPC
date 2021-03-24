//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundleCollectionEntityData.h
// Created: Wed Mar 10 19:08:29 2021
//

#ifndef FBGEN_BlueprintBundleCollectionEntityData_H
#define FBGEN_BlueprintBundleCollectionEntityData_H

#include "StreamRealm.h"
#include "BlueprintBundleCollection.h"
#include "EntityData.h"

class BlueprintBundleCollectionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817A60;
	}
	StreamRealm m_StreamRealm; // 0x18
	unsigned char _0x1c[0x4];
	BlueprintBundleCollection* m_Collection; // 0x20
	int m_ActiveIndex; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_BlueprintBundleCollectionEntityData_H
