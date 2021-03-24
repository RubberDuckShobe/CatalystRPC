//
// Generated with FrostbiteGen by Chod
// File: SDK\EditableActionMap.h
// Created: Wed Mar 10 19:07:04 2021
//

#ifndef FBGEN_EditableActionMap_H
#define FBGEN_EditableActionMap_H

#include "EntryInputActionMapsData.h"
#include "EditableActions.h"
struct EditableActionMap
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F858;
	}
	const char* m_Id; // 0x0
	const char* m_NameId; // 0x8
	EntryInputActionMapsData* m_ActionMap; // 0x10
	EditableActions m_ConfigurationLayout; // 0x18
}; // size = 0x20

#endif // FBGEN_EditableActionMap_H
