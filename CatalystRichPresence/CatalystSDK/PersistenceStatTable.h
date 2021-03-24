//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistenceStatTable.h
// Created: Wed Mar 10 19:03:12 2021
//

#ifndef FBGEN_PersistenceStatTable_H
#define FBGEN_PersistenceStatTable_H

#include "AbstractPersistenceData.h"
#include "DataContainer.h"

class PersistenceStatTable :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809BF0;
	}
	const char* m_TableName; // 0x10
	AbstractPersistenceData* m_OwnerPersistenceData; // 0x18
}; // size = 0x20

#endif // FBGEN_PersistenceStatTable_H
