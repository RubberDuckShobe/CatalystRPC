//
// Generated with FrostbiteGen by Chod
// File: SDK\SimplePropertyTrackData.h
// Created: Wed Mar 10 19:01:25 2021
//

#ifndef FBGEN_SimplePropertyTrackData_H
#define FBGEN_SimplePropertyTrackData_H

#include "InterpolationType.h"
#include "PropertyTrackData.h"

class SimplePropertyTrackData :
	public PropertyTrackData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA5C0;
	}
	InterpolationType m_InterpolationType; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_SimplePropertyTrackData_H
