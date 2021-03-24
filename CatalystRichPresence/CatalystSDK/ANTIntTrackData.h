//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTIntTrackData.h
// Created: Wed Mar 10 19:08:50 2021
//

#ifndef FBGEN_ANTIntTrackData_H
#define FBGEN_ANTIntTrackData_H

#include "AntRef.h"
#include "IntTrackData.h"

class ANTIntTrackData :
	public IntTrackData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817E20;
	}
	AntRef m_Signal; // 0x40
	int m_ResetValue; // 0x54
	bool m_ResetOnLeave; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_ANTIntTrackData_H
