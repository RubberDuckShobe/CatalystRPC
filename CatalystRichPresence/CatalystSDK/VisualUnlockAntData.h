//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualUnlockAntData.h
// Created: Wed Mar 10 18:59:11 2021
//

#ifndef FBGEN_VisualUnlockAntData_H
#define FBGEN_VisualUnlockAntData_H

#include "Array.h"
#include "DataContainer.h"

class VisualUnlockAntData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E9F0;
	}
	Array<AntEnumeration*> m_AntEnumerations; // 0x10
}; // size = 0x18

#endif // FBGEN_VisualUnlockAntData_H
