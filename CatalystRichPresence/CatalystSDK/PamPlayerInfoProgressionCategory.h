//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerInfoProgressionCategory.h
// Created: Wed Mar 10 19:04:15 2021
//

#ifndef FBGEN_PamPlayerInfoProgressionCategory_H
#define FBGEN_PamPlayerInfoProgressionCategory_H

#include "Array.h"
struct PamPlayerInfoProgressionCategory
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428776E0;
	}
	const char* m_Name; // 0x0
	Array<PamPlayerInfoProgressionFlagGroup> m_PlayerInfoFlagGroups; // 0x8
}; // size = 0x10

#endif // FBGEN_PamPlayerInfoProgressionCategory_H
