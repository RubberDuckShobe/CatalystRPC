//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryInputActionMappingData.h
// Created: Wed Mar 10 19:06:55 2021
//

#ifndef FBGEN_EntryInputActionMappingData_H
#define FBGEN_EntryInputActionMappingData_H

#include "InputConceptIdentifiers.h"
#include "InputActionMappingData.h"

class EntryInputActionMappingData :
	public InputActionMappingData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FA80;
	}
	int m_ActionIdentifier; // 0x10
	InputConceptIdentifiers m_ConceptIdentifier; // 0x14
}; // size = 0x18

#endif // FBGEN_EntryInputActionMappingData_H
