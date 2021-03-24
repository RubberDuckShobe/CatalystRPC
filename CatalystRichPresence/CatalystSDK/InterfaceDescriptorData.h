//
// Generated with FrostbiteGen by Chod
// File: SDK\InterfaceDescriptorData.h
// Created: Wed Mar 10 19:06:26 2021
//

#ifndef FBGEN_InterfaceDescriptorData_H
#define FBGEN_InterfaceDescriptorData_H

#include "Array.h"
#include "DynamicDataContainer.h"

class InterfaceDescriptorData :
	public DynamicDataContainer // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7FD0;
	}
	Array<DynamicEvent> m_InputEvents; // 0x18
	Array<DynamicEvent> m_OutputEvents; // 0x20
	Array<DynamicLink> m_InputLinks; // 0x28
	Array<DynamicLink> m_OutputLinks; // 0x30
}; // size = 0x38

#endif // FBGEN_InterfaceDescriptorData_H
