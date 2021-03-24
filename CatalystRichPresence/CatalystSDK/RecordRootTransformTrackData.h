//
// Generated with FrostbiteGen by Chod
// File: SDK\RecordRootTransformTrackData.h
// Created: Wed Mar 10 19:02:40 2021
//

#ifndef FBGEN_RecordRootTransformTrackData_H
#define FBGEN_RecordRootTransformTrackData_H

#include "LayeredTransformTrackData.h"
#include "KeyedTransformLayerData.h"
#include "RecordTrackChildrenData.h"

class RecordRootTransformTrackData :
	public RecordTrackChildrenData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428238E0;
	}
	LayeredTransformTrackData* m_LayeredTransformTrack; // 0x40
	KeyedTransformLayerData* m_KeyedTransformTrack; // 0x48
}; // size = 0x50

#endif // FBGEN_RecordRootTransformTrackData_H
