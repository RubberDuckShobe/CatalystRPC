//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIInputControlEntityData.h
// Created: Wed Mar 10 19:03:30 2021
//

#ifndef FBGEN_PamUIInputControlEntityData_H
#define FBGEN_PamUIInputControlEntityData_H

#include "EntityData.h"

class PamUIInputControlEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428899E0;
	}
	bool m_DisableGameInput; // 0x18
	bool m_DisableInputTriggers; // 0x19
	unsigned char _0x1a[0x6];
}; // size = 0x20

#endif // FBGEN_PamUIInputControlEntityData_H
