//
// Generated with FrostbiteGen by Chod
// File: SDK\LayeredTransformTrackData.h
// Created: Wed Mar 10 19:06:20 2021
//

#ifndef FBGEN_LayeredTransformTrackData_H
#define FBGEN_LayeredTransformTrackData_H

#include "Array.h"
#include "PropertyTrackBaseData.h"

class LayeredTransformTrackData :
	public PropertyTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DED0;
	}
	Array<TransformLayerData*> m_LayerTracks; // 0x38
	int m_TimelineOriginPinId; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_LayeredTransformTrackData_H
