//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec3TrackData.h
// Created: Wed Mar 10 18:59:28 2021
//

#ifndef FBGEN_Vec3TrackData_H
#define FBGEN_Vec3TrackData_H

#include "FloatTrackData.h"
#include "PropertyTrackBaseData.h"

class Vec3TrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C6E0;
	}
	FloatTrackData* m_X; // 0x38
	FloatTrackData* m_Y; // 0x40
	FloatTrackData* m_Z; // 0x48
}; // size = 0x50

#endif // FBGEN_Vec3TrackData_H
