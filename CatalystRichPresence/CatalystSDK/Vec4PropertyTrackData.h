//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec4PropertyTrackData.h
// Created: Wed Mar 10 18:59:27 2021
//

#ifndef FBGEN_Vec4PropertyTrackData_H
#define FBGEN_Vec4PropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class Vec4PropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA320;
	}
	Array<Vec4> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_Vec4PropertyTrackData_H
