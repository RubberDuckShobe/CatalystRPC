//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerViewData.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerViewData_H
#define FBGEN_PlayerViewData_H

#include "Array.h"
#include "DataContainer.h"

class PlayerViewData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809A10;
	}
	Array<SubViewData*> m_SubViews; // 0x10
}; // size = 0x18

#endif // FBGEN_PlayerViewData_H
