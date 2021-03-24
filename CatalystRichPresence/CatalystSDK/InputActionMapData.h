//
// Generated with FrostbiteGen by Chod
// File: SDK\InputActionMapData.h
// Created: Wed Mar 10 19:06:30 2021
//

#ifndef FBGEN_InputActionMapData_H
#define FBGEN_InputActionMapData_H

#include "Array.h"
#include "InputActionMapPlatform.h"
#include "InputActionMapSlot.h"
#include "DataContainer.h"

class InputActionMapData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428101A0;
	}
	Array<InputActionsData*> m_Actions; // 0x10
	InputActionMapPlatform m_PlatformSpecific; // 0x18
	InputActionMapSlot m_Slot; // 0x1c
	const char* m_CopyKeyBindingsFrom; // 0x20
}; // size = 0x28

#endif // FBGEN_InputActionMapData_H
