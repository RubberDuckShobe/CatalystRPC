//
// Generated with FrostbiteGen by Chod
// File: SDK\RecordTrackBaseData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_RecordTrackBaseData_H
#define FBGEN_RecordTrackBaseData_H

#include "LinkTrackData.h"

class RecordTrackBaseData :
	public LinkTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DBD0;
	}
	int m_FramesToSkipPerKey; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_RecordTrackBaseData_H
