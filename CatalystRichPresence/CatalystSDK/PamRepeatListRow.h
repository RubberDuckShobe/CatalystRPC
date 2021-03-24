//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRepeatListRow.h
// Created: Wed Mar 10 19:04:07 2021
//

#ifndef FBGEN_PamRepeatListRow_H
#define FBGEN_PamRepeatListRow_H

#include "PamListRow.h"

class PamRepeatListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AA60;
	}
	int m_Index; // 0x18
	int m_Count; // 0x1c
}; // size = 0x20

#endif // FBGEN_PamRepeatListRow_H
