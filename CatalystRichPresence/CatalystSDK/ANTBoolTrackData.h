//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTBoolTrackData.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTBoolTrackData_H
#define FBGEN_ANTBoolTrackData_H

#include "AntRef.h"
#include "BoolTrackData.h"

class ANTBoolTrackData :
	public BoolTrackData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817EE0;
	}
	AntRef m_Signal; // 0x40
	bool m_ResetOnLeave; // 0x54
	bool m_ResetValue; // 0x55
	unsigned char _0x56[0x2];
}; // size = 0x58

#endif // FBGEN_ANTBoolTrackData_H
