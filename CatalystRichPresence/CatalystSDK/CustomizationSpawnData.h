//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizationSpawnData.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomizationSpawnData_H
#define FBGEN_CustomizationSpawnData_H

#include "Array.h"
#include "ExtraSpawnData.h"

class CustomizationSpawnData :
	public ExtraSpawnData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C20E0;
	}
	Array<CustomizeVisual> m_VisualGroups; // 0x10
}; // size = 0x18

#endif // FBGEN_CustomizationSpawnData_H
