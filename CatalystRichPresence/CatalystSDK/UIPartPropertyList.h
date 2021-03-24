//
// Generated with FrostbiteGen by Chod
// File: SDK\UIPartPropertyList.h
// Created: Wed Mar 10 18:59:50 2021
//

#ifndef FBGEN_UIPartPropertyList_H
#define FBGEN_UIPartPropertyList_H

#include "Array.h"
#include "DataContainer.h"

class UIPartPropertyList :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810500;
	}
	Array<UIPartProperties> m_HudPropertyList; // 0x10
}; // size = 0x18

#endif // FBGEN_UIPartPropertyList_H
