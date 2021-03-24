//
// Generated with FrostbiteGen by Chod
// File: SDK\ComponentData.h
// Created: Wed Mar 10 19:07:37 2021
//

#ifndef FBGEN_ComponentData_H
#define FBGEN_ComponentData_H

#include "Array.h"
#include "LinearTransform.h"
#include "GameObjectData.h"

class ComponentData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7730;
	}
	Array<GameObjectData*> m_Components; // 0x18
	LinearTransform m_Transform; // 0x20
	bool m_Excluded; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_ComponentData_H
