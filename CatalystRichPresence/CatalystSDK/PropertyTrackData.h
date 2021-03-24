//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyTrackData.h
// Created: Wed Mar 10 19:02:49 2021
//

#ifndef FBGEN_PropertyTrackData_H
#define FBGEN_PropertyTrackData_H

#include "Array.h"
#include "DataContainer.h"

class PropertyTrackData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA8C0;
	}
	int m_Id; // 0x10
	unsigned char _0x14[0x4];
	Array<int> m_Times; // 0x18
}; // size = 0x20

#endif // FBGEN_PropertyTrackData_H
