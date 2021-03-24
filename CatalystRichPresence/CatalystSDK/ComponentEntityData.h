//
// Generated with FrostbiteGen by Chod
// File: SDK\ComponentEntityData.h
// Created: Wed Mar 10 19:07:37 2021
//

#ifndef FBGEN_ComponentEntityData_H
#define FBGEN_ComponentEntityData_H

#include "Array.h"
#include "SpatialEntityData.h"

class ComponentEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E77F0;
	}
	Array<GameObjectData*> m_Components; // 0x60
	unsigned char m_ClientRuntimeComponentCount; // 0x68
	unsigned char m_ServerRuntimeComponentCount; // 0x69
	unsigned char m_ClientRuntimeTransformationCount; // 0x6a
	unsigned char m_ServerRuntimeTransformationCount; // 0x6b
	unsigned char _0x6c[0x4];
}; // size = 0x70

#endif // FBGEN_ComponentEntityData_H
