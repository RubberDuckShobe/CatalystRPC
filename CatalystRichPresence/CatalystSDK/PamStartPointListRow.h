//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStartPointListRow.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamStartPointListRow_H
#define FBGEN_PamStartPointListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamStartPointListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AAC0;
	}
	LocalizedString* m_LocalizedLevel; // 0x18
	LocalizedString* m_LocalizedStartPoint; // 0x20
	const char* m_Level; // 0x28
	const char* m_StartPoint; // 0x30
}; // size = 0x38

#endif // FBGEN_PamStartPointListRow_H
