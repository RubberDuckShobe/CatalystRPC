//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundleEntityData.h
// Created: Wed Mar 10 19:08:29 2021
//

#ifndef FBGEN_BlueprintBundleEntityData_H
#define FBGEN_BlueprintBundleEntityData_H

#include "StreamRealm.h"
#include "BlueprintBundleReference.h"
#include "EntityData.h"

class BlueprintBundleEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817AC0;
	}
	StreamRealm m_StreamRealm; // 0x18
	unsigned char _0x1c[0x4];
	BlueprintBundleReference m_Bundle; // 0x20
}; // size = 0x58

#endif // FBGEN_BlueprintBundleEntityData_H
