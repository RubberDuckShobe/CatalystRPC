//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectBlueprint.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_ObjectBlueprint_H
#define FBGEN_ObjectBlueprint_H

#include "EntityData.h"
#include "Blueprint.h"

class ObjectBlueprint :
	public Blueprint // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7EB0;
	}
	EntityData* m_Object; // 0x40
}; // size = 0x48

#endif // FBGEN_ObjectBlueprint_H
