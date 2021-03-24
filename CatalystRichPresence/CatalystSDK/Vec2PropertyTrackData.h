//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec2PropertyTrackData.h
// Created: Wed Mar 10 18:59:30 2021
//

#ifndef FBGEN_Vec2PropertyTrackData_H
#define FBGEN_Vec2PropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class Vec2PropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA3E0;
	}
	Array<Vec2> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_Vec2PropertyTrackData_H
