//
// Generated with FrostbiteGen by Chod
// File: SDK\SchematicPinTrackData.h
// Created: Wed Mar 10 19:02:30 2021
//

#ifndef FBGEN_SchematicPinTrackData_H
#define FBGEN_SchematicPinTrackData_H

#include "TimelineTrackData.h"

class SchematicPinTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DB10;
	}
	int m_SourcePinId; // 0x28
	int m_TargetPinId; // 0x2c
	int m_TargetPinNameHash; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_SchematicPinTrackData_H
