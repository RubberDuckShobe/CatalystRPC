//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorTrackData.h
// Created: Wed Mar 10 19:07:39 2021
//

#ifndef FBGEN_ColorTrackData_H
#define FBGEN_ColorTrackData_H

#include "Array.h"
#include "PropertyTrackBaseData.h"

class ColorTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E3B0;
	}
	Array<ColorKeyframe> m_Keyframes; // 0x38
}; // size = 0x40

#endif // FBGEN_ColorTrackData_H
