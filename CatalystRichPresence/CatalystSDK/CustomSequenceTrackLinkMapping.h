//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomSequenceTrackLinkMapping.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomSequenceTrackLinkMapping_H
#define FBGEN_CustomSequenceTrackLinkMapping_H

#include "DataContainer.h"

class CustomSequenceTrackLinkMapping :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA860;
	}
	int m_TrackLinkID; // 0x10
	int m_SequenceLinkID; // 0x14
}; // size = 0x18

#endif // FBGEN_CustomSequenceTrackLinkMapping_H
