//
// Generated with FrostbiteGen by Chod
// File: SDK\TextUnlockPartData.h
// Created: Wed Mar 10 19:00:23 2021
//

#ifndef FBGEN_TextUnlockPartData_H
#define FBGEN_TextUnlockPartData_H

#include "ObjectBlueprint.h"
#include "DataContainer.h"

class TextUnlockPartData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811820;
	}
	const char* m_ShaderNodeName; // 0x10
	ObjectBlueprint* m_MeshBlueprint; // 0x18
}; // size = 0x20

#endif // FBGEN_TextUnlockPartData_H
