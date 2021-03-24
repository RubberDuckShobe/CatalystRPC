//
// Generated with FrostbiteGen by Chod
// File: SDK\BooleanPinConditionData.h
// Created: Wed Mar 10 19:08:25 2021
//

#ifndef FBGEN_BooleanPinConditionData_H
#define FBGEN_BooleanPinConditionData_H

#include "TimelineTrackDataConditionsBase.h"

class BooleanPinConditionData :
	public TimelineTrackDataConditionsBase // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C4A0;
	}
	int m_ConditionPinId; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_BooleanPinConditionData_H
