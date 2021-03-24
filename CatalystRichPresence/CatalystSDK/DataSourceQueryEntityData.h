//
// Generated with FrostbiteGen by Chod
// File: SDK\DataSourceQueryEntityData.h
// Created: Wed Mar 10 19:07:19 2021
//

#ifndef FBGEN_DataSourceQueryEntityData_H
#define FBGEN_DataSourceQueryEntityData_H

#include "Realm.h"
#include "DataContainer.h"
#include "EntityData.h"

class DataSourceQueryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428995C0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	DataContainer* m_InData; // 0x20
	int m_ArrayIndex; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_DataSourceQueryEntityData_H
