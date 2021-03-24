//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowExtrusionObjectData.h
// Created: Wed Mar 10 19:01:28 2021
//

#ifndef FBGEN_ShadowExtrusionObjectData_H
#define FBGEN_ShadowExtrusionObjectData_H

#include "Array.h"
#include "GameObjectData.h"

class ShadowExtrusionObjectData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142892630;
	}
	Array<ShadowExtrusionObjectInstance> m_ObjectExtrusions; // 0x18
}; // size = 0x20

#endif // FBGEN_ShadowExtrusionObjectData_H
