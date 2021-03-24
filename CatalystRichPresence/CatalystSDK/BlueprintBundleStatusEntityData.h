//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundleStatusEntityData.h
// Created: Wed Mar 10 19:08:28 2021
//

#ifndef FBGEN_BlueprintBundleStatusEntityData_H
#define FBGEN_BlueprintBundleStatusEntityData_H

#include "StreamRealm.h"
#include "EntityData.h"

class BlueprintBundleStatusEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817A00;
	}
	StreamRealm m_StreamRealm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_BundleName; // 0x20
}; // size = 0x28

#endif // FBGEN_BlueprintBundleStatusEntityData_H
