//
// Generated with FrostbiteGen by Chod
// File: SDK\RecordEntryInputTrackData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_RecordEntryInputTrackData_H
#define FBGEN_RecordEntryInputTrackData_H

#include "FloatTrackData.h"
#include "RecordTrackChildrenData.h"

class RecordEntryInputTrackData :
	public RecordTrackChildrenData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823940;
	}
	unsigned int m_EntryId; // 0x40
	unsigned char _0x44[0x4];
	FloatTrackData* m_FireInput; // 0x48
	FloatTrackData* m_PitchInput; // 0x50
	FloatTrackData* m_YawInput; // 0x58
	FloatTrackData* m_RollInput; // 0x60
	FloatTrackData* m_ThrottleInput; // 0x68
	FloatTrackData* m_DigitalBitFlagsInput; // 0x70
	FloatTrackData* m_AimingYaw; // 0x78
	FloatTrackData* m_AimingPitch; // 0x80
}; // size = 0x88

#endif // FBGEN_RecordEntryInputTrackData_H
