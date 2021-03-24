//
// Generated with FrostbiteGen by Chod
// File: SDK\PartLinkData.h
// Created: Wed Mar 10 19:03:18 2021
//

#ifndef FBGEN_PartLinkData_H
#define FBGEN_PartLinkData_H

#include "DataContainer.h"

class PartLinkData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816B60;
	}
	unsigned int m_PartComponentIndex1; // 0x10
	unsigned int m_PartComponentIndex2; // 0x14
}; // size = 0x18

#endif // FBGEN_PartLinkData_H
