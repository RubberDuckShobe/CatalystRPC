//
// Generated with FrostbiteGen by Chod
// File: SDK\InputRecorderTrackData.h
// Created: Wed Mar 10 19:06:28 2021
//

#ifndef FBGEN_InputRecorderTrackData_H
#define FBGEN_InputRecorderTrackData_H

#include "FloatPropertyTrackData.h"
struct InputRecorderTrackData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DCC8;
	}
	const char* m_Name; // 0x0
	int m_InputAction; // 0x8
	unsigned char _0xc[0x4];
	FloatPropertyTrackData* m_PropertyTrack; // 0x10
}; // size = 0x18

#endif // FBGEN_InputRecorderTrackData_H
