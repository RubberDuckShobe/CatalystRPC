//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomSequenceTrackPropertyMapping.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomSequenceTrackPropertyMapping_H
#define FBGEN_CustomSequenceTrackPropertyMapping_H

#include "DataContainer.h"

class CustomSequenceTrackPropertyMapping :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA7A0;
	}
	int m_TrackPropertyID; // 0x10
	int m_SequencePropertyID; // 0x14
}; // size = 0x18

#endif // FBGEN_CustomSequenceTrackPropertyMapping_H
