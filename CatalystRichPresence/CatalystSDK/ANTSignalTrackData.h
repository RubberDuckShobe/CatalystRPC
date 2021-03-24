//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTSignalTrackData.h
// Created: Wed Mar 10 19:08:50 2021
//

#ifndef FBGEN_ANTSignalTrackData_H
#define FBGEN_ANTSignalTrackData_H

#include "Array.h"
#include "LinkTrackData.h"

class ANTSignalTrackData :
	public LinkTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817D00;
	}
	Array<PropertyTrackBaseData*> m_SignalTracks; // 0x38
}; // size = 0x40

#endif // FBGEN_ANTSignalTrackData_H
