//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizationTable.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomizationTable_H
#define FBGEN_CustomizationTable_H

#include "Array.h"
#include "DataContainer.h"

class CustomizationTable :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811760;
	}
	Array<CustomizationUnlockParts*> m_UnlockParts; // 0x10
}; // size = 0x18

#endif // FBGEN_CustomizationTable_H
