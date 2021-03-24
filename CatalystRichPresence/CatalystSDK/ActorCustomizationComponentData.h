//
// Generated with FrostbiteGen by Chod
// File: SDK\ActorCustomizationComponentData.h
// Created: Wed Mar 10 19:08:48 2021
//

#ifndef FBGEN_ActorCustomizationComponentData_H
#define FBGEN_ActorCustomizationComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class ActorCustomizationComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1D20;
	}
	Array<CustomizeVisual> m_GameviewVisualGroups; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_ActorCustomizationComponentData_H
