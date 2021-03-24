//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIGameLanguageEntityData.h
// Created: Wed Mar 10 19:03:31 2021
//

#ifndef FBGEN_PamUIGameLanguageEntityData_H
#define FBGEN_PamUIGameLanguageEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamUIGameLanguageEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428894A0;
	}
	Array<LanguageFormat> m_Languages; // 0x18
}; // size = 0x20

#endif // FBGEN_PamUIGameLanguageEntityData_H
