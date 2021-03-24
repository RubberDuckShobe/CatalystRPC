//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistenceGameData.h
// Created: Wed Mar 10 19:03:13 2021
//

#ifndef FBGEN_PersistenceGameData_H
#define FBGEN_PersistenceGameData_H

#include "Array.h"
#include "Asset.h"

class PersistenceGameData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809CB0;
	}
	Array<Asset*> m_Assets; // 0x18
}; // size = 0x20

#endif // FBGEN_PersistenceGameData_H
