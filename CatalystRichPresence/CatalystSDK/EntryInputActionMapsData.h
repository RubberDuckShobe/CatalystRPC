//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryInputActionMapsData.h
// Created: Wed Mar 10 19:06:55 2021
//

#ifndef FBGEN_EntryInputActionMapsData_H
#define FBGEN_EntryInputActionMapsData_H

#include "InputActionMapSlot.h"
#include "Array.h"
#include "Asset.h"

class EntryInputActionMapsData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810080;
	}
	int m_ActionMapSettingsScheme; // 0x18
	InputActionMapSlot m_DefaultInputActionMap; // 0x1c
	Array<EntryInputActionMapData*> m_InputActionMaps; // 0x20
}; // size = 0x28

#endif // FBGEN_EntryInputActionMapsData_H
