//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolTrackData.h
// Created: Wed Mar 10 19:08:25 2021
//

#ifndef FBGEN_BoolTrackData_H
#define FBGEN_BoolTrackData_H

#include "Array.h"
#include "PropertyTrackBaseData.h"

class BoolTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E410;
	}
	Array<BoolKeyframe> m_Keyframes; // 0x38
}; // size = 0x40

#endif // FBGEN_BoolTrackData_H
