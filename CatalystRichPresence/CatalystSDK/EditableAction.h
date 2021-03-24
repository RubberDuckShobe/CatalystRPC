//
// Generated with FrostbiteGen by Chod
// File: SDK\EditableAction.h
// Created: Wed Mar 10 19:07:04 2021
//

#ifndef FBGEN_EditableAction_H
#define FBGEN_EditableAction_H

#include "InputConceptIdentifiers.h"
#include "DataContainer.h"

class EditableAction :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810020;
	}
	InputConceptIdentifiers m_Concept; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_EditableAction_H
