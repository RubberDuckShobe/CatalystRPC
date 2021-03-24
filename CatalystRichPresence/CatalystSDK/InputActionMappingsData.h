//
// Generated with FrostbiteGen by Chod
// File: SDK\InputActionMappingsData.h
// Created: Wed Mar 10 19:06:30 2021
//

#ifndef FBGEN_InputActionMappingsData_H
#define FBGEN_InputActionMappingsData_H

#include "Array.h"
#include "DataContainer.h"

class InputActionMappingsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280FB40;
	}
	Array<InputActionMappingData*> m_Mappings; // 0x10
}; // size = 0x18

#endif // FBGEN_InputActionMappingsData_H
