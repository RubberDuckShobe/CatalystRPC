//
// Generated with FrostbiteGen by Chod
// File: SDK\UIResourceTable.h
// Created: Wed Mar 10 18:59:49 2021
//

#ifndef FBGEN_UIResourceTable_H
#define FBGEN_UIResourceTable_H

#include "Array.h"
#include "Asset.h"

class UIResourceTable :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283F8A0;
	}
	Array<UIResourceTableEntry> m_Entries; // 0x18
}; // size = 0x20

#endif // FBGEN_UIResourceTable_H
