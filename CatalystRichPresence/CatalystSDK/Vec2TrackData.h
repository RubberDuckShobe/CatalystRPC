//
// Generated with FrostbiteGen by Chod
// File: SDK\Vec2TrackData.h
// Created: Wed Mar 10 18:59:30 2021
//

#ifndef FBGEN_Vec2TrackData_H
#define FBGEN_Vec2TrackData_H

#include "FloatTrackData.h"
#include "PropertyTrackBaseData.h"

class Vec2TrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DAB0;
	}
	FloatTrackData* m_X; // 0x38
	FloatTrackData* m_Y; // 0x40
}; // size = 0x48

#endif // FBGEN_Vec2TrackData_H
