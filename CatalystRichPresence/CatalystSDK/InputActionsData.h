//
// Generated with FrostbiteGen by Chod
// File: SDK\InputActionsData.h
// Created: Wed Mar 10 19:06:30 2021
//

#ifndef FBGEN_InputActionsData_H
#define FBGEN_InputActionsData_H

#include "InputConceptIdentifiers.h"
#include "Array.h"
#include "DataContainer.h"

class InputActionsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810200;
	}
	const char* m_NameSid; // 0x10
	InputConceptIdentifiers m_ConceptIdentifier; // 0x18
	InputConceptIdentifiers m_CopyKeyBindingFrom; // 0x1c
	Array<InputActionData*> m_InputActions; // 0x20
	bool m_HideInKeyBindings; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_InputActionsData_H
