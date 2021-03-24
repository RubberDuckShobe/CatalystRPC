//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticEnlightenEntityData.h
// Created: Wed Mar 10 19:00:56 2021
//

#ifndef FBGEN_StaticEnlightenEntityData_H
#define FBGEN_StaticEnlightenEntityData_H

#include "StaticEnlightenData.h"
#include "EnlightenDataAsset.h"
#include "ObjectBlueprint.h"
#include "EnlightenEntityData.h"

class StaticEnlightenEntityData :
	public EnlightenEntityData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842490;
	}
	StaticEnlightenData* m_EnlightenData; // 0x28
	EnlightenDataAsset* m_DynamicEnlightenData; // 0x30
	ObjectBlueprint* m_VisualEnvironment; // 0x38
}; // size = 0x40

#endif // FBGEN_StaticEnlightenEntityData_H
