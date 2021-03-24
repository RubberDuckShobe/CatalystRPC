//
// Generated with FrostbiteGen by Chod
// File: SDK\PamObjectCastEntityData.h
// Created: Wed Mar 10 19:04:18 2021
//

#ifndef FBGEN_PamObjectCastEntityData_H
#define FBGEN_PamObjectCastEntityData_H

#include "Realm.h"
#include "DataContainer.h"
#include "EntityData.h"

class PamObjectCastEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D680;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	DataContainer* m_DataInput; // 0x20
	const char* m_QualifiedTypeName; // 0x28
}; // size = 0x30

#endif // FBGEN_PamObjectCastEntityData_H
