//
// Generated with FrostbiteGen by Chod
// File: SDK\IntTrackData.h
// Created: Wed Mar 10 19:06:27 2021
//

#ifndef FBGEN_IntTrackData_H
#define FBGEN_IntTrackData_H

#include "Array.h"
#include "PropertyTrackBaseData.h"

class IntTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DF30;
	}
	Array<IntKeyframe> m_Keyframes; // 0x38
}; // size = 0x40

#endif // FBGEN_IntTrackData_H
