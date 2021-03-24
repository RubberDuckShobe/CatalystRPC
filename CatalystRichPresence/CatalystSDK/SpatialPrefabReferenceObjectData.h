//
// Generated with FrostbiteGen by Chod
// File: SDK\SpatialPrefabReferenceObjectData.h
// Created: Wed Mar 10 19:01:05 2021
//

#ifndef FBGEN_SpatialPrefabReferenceObjectData_H
#define FBGEN_SpatialPrefabReferenceObjectData_H

#include "BlueprintPersistenceSetting.h"
#include "SpatialReferenceObjectData.h"

class SpatialPrefabReferenceObjectData :
	public SpatialReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7AF0;
	}
	BlueprintPersistenceSetting m_PersistenceSetting; // 0xa0
	unsigned char _0xa4[0xc];
}; // size = 0xb0

#endif // FBGEN_SpatialPrefabReferenceObjectData_H
