//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTVec3TrackData.h
// Created: Wed Mar 10 19:08:50 2021
//

#ifndef FBGEN_ANTVec3TrackData_H
#define FBGEN_ANTVec3TrackData_H

#include "Vec3.h"
#include "AntRef.h"
#include "Vec3TrackData.h"

class ANTVec3TrackData :
	public Vec3TrackData // size = 0x50
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817DC0;
	}
	Vec3 m_ResetValue; // 0x50
	AntRef m_Signal; // 0x60
	bool m_ResetOnLeave; // 0x74
	unsigned char _0x75[0xb];
}; // size = 0x80

#endif // FBGEN_ANTVec3TrackData_H
