//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphComponentData.h
// Created: Wed Mar 10 19:05:48 2021
//

#ifndef FBGEN_MorphComponentData_H
#define FBGEN_MorphComponentData_H

#include "ObjectBlueprint.h"
#include "AntRef.h"
#include "GameComponentData.h"

class MorphComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142822670;
	}
	ObjectBlueprint* m_MeshBlueprint; // 0x70
	AntRef m_DofSet; // 0x78
	bool m_Enabled; // 0x8c
	unsigned char _0x8d[0x3];
}; // size = 0x90

#endif // FBGEN_MorphComponentData_H
