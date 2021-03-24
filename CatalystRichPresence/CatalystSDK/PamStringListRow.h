//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStringListRow.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamStringListRow_H
#define FBGEN_PamStringListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamStringListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AD60;
	}
	LocalizedString* m_LocalizedString; // 0x18
	const char* m_String; // 0x20
}; // size = 0x28

#endif // FBGEN_PamStringListRow_H
