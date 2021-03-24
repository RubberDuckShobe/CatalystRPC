//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertySortScopeStageData.h
// Created: Wed Mar 10 19:02:49 2021
//

#ifndef FBGEN_PropertySortScopeStageData_H
#define FBGEN_PropertySortScopeStageData_H

#include "ScopeStageSortProperty.h"
#include "PropertySortScopeStageOrder.h"
#include "SoundScopeStageData.h"

class PropertySortScopeStageData :
	public SoundScopeStageData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8160;
	}
	unsigned int m_Count; // 0x10
	ScopeStageSortProperty m_Property; // 0x14
	PropertySortScopeStageOrder m_Order; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_PropertySortScopeStageData_H
