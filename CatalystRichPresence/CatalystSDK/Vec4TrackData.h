//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec4TrackData.h
// Created: Wed Mar 10 18:59:26 2021
//

#ifndef FBGEN_Vec4TrackData_H
#define FBGEN_Vec4TrackData_H

#include "FloatTrackData.h"
#include "PropertyTrackBaseData.h"

class Vec4TrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C680;
	}
	FloatTrackData* m_X; // 0x38
	FloatTrackData* m_Y; // 0x40
	FloatTrackData* m_Z; // 0x48
	FloatTrackData* m_W; // 0x50
}; // size = 0x58

#endif // FBGEN_Vec4TrackData_H
