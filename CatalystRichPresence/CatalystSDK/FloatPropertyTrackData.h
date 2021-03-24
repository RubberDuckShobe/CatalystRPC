//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatPropertyTrackData.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FloatPropertyTrackData_H
#define FBGEN_FloatPropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class FloatPropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA500;
	}
	Array<float> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_FloatPropertyTrackData_H
