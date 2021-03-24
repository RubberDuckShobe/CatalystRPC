//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolPropertyTrackData.h
// Created: Wed Mar 10 19:08:25 2021
//

#ifndef FBGEN_BoolPropertyTrackData_H
#define FBGEN_BoolPropertyTrackData_H

#include "Array.h"
#include "SimplePropertyTrackData.h"

class BoolPropertyTrackData :
	public SimplePropertyTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA560;
	}
	Array<bool> m_Values; // 0x28
}; // size = 0x30

#endif // FBGEN_BoolPropertyTrackData_H
