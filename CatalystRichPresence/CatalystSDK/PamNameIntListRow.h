//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNameIntListRow.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNameIntListRow_H
#define FBGEN_PamNameIntListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamNameIntListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288ABE0;
	}
	LocalizedString* m_Name; // 0x18
	int m_Value; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamNameIntListRow_H
