//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryInputActionBindingsData.h
// Created: Wed Mar 10 19:06:55 2021
//

#ifndef FBGEN_EntryInputActionBindingsData_H
#define FBGEN_EntryInputActionBindingsData_H

#include "Array.h"
#include "DataContainer.h"

class EntryInputActionBindingsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428100E0;
	}
	Array<EntryInputActionBinding> m_Bindings; // 0x10
}; // size = 0x18

#endif // FBGEN_EntryInputActionBindingsData_H
