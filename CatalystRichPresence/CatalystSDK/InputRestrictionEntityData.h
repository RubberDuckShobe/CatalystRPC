//
// Generated with FrostbiteGen by Chod
// File: SDK\InputRestrictionEntityData.h
// Created: Wed Mar 10 19:06:28 2021
//

#ifndef FBGEN_InputRestrictionEntityData_H
#define FBGEN_InputRestrictionEntityData_H

#include "Array.h"
#include "EntityData.h"

class InputRestrictionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AEB0;
	}
	Array<int> m_DisabledInputs; // 0x18
	bool m_OverridePreviousInputRestriction; // 0x20
	bool m_ApplyRestrictionsToSpecificPlayer; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_InputRestrictionEntityData_H
