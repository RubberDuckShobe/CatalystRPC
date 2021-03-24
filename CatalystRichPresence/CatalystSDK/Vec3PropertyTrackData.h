//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec3PropertyTrackData.h
// Created: Wed Mar 10 18:59:29 2021
//

#ifndef FBGEN_Vec3PropertyTrackData_H
#define FBGEN_Vec3PropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class Vec3PropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA380;
	}
	Array<Vec3> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_Vec3PropertyTrackData_H
