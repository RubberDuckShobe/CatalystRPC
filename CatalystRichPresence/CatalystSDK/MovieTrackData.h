//
// Generated with FrostbiteGen by Chod
// File: SDK\MovieTrackData.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MovieTrackData_H
#define FBGEN_MovieTrackData_H

#include "Array.h"
#include "GuideTrackData.h"

class MovieTrackData :
	public GuideTrackData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A190;
	}
	Array<MovieTrackKeyframe*> m_Keyframes; // 0x30
}; // size = 0x38

#endif // FBGEN_MovieTrackData_H
