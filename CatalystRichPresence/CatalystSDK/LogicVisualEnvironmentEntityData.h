//
// Generated with FrostbiteGen by Chod
// File: SDK\LogicVisualEnvironmentEntityData.h
// Created: Wed Mar 10 19:06:06 2021
//

#ifndef FBGEN_LogicVisualEnvironmentEntityData_H
#define FBGEN_LogicVisualEnvironmentEntityData_H

#include "VisualEnvironmentBlueprint.h"
#include "EntityData.h"

class LogicVisualEnvironmentEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821E40;
	}
	VisualEnvironmentBlueprint* m_VisualEnvironment; // 0x18
	float m_Visibility; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_LogicVisualEnvironmentEntityData_H
