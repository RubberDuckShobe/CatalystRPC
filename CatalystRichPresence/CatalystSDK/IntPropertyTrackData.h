//
// Generated with FrostbiteGen by Chod
// File: SDK\IntPropertyTrackData.h
// Created: Wed Mar 10 19:06:27 2021
//

#ifndef FBGEN_IntPropertyTrackData_H
#define FBGEN_IntPropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class IntPropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA4A0;
	}
	Array<int> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_IntPropertyTrackData_H
