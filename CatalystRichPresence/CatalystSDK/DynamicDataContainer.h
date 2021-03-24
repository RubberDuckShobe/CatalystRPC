//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicDataContainer.h
// Created: Wed Mar 10 19:07:06 2021
//

#ifndef FBGEN_DynamicDataContainer_H
#define FBGEN_DynamicDataContainer_H

#include "Array.h"
#include "DataContainer.h"

class DynamicDataContainer :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2160;
	}
	Array<DataField> m_Fields; // 0x10
}; // size = 0x18

#endif // FBGEN_DynamicDataContainer_H
