//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistenceStatGroup.h
// Created: Wed Mar 10 19:03:12 2021
//

#ifndef FBGEN_PersistenceStatGroup_H
#define FBGEN_PersistenceStatGroup_H

#include "DataContainer.h"

class PersistenceStatGroup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809B90;
	}
	const char* m_GroupName; // 0x10
}; // size = 0x18

#endif // FBGEN_PersistenceStatGroup_H
