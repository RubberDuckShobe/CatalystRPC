//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomSequenceTrackEventMapping.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomSequenceTrackEventMapping_H
#define FBGEN_CustomSequenceTrackEventMapping_H

#include "DataContainer.h"

class CustomSequenceTrackEventMapping :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA800;
	}
	int m_TrackEventID; // 0x10
	int m_SequenceEventID; // 0x14
}; // size = 0x18

#endif // FBGEN_CustomSequenceTrackEventMapping_H
