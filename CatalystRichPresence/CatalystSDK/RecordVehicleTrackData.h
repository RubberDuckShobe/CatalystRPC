//
// Generated with FrostbiteGen by Chod
// File: SDK\RecordVehicleTrackData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_RecordVehicleTrackData_H
#define FBGEN_RecordVehicleTrackData_H

#include "Array.h"
#include "RecordTrackBaseData.h"

class RecordVehicleTrackData :
	public RecordTrackBaseData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823880;
	}
	Array<RecordTrackChildrenData*> m_ChildrenTracks; // 0x40
}; // size = 0x48

#endif // FBGEN_RecordVehicleTrackData_H
