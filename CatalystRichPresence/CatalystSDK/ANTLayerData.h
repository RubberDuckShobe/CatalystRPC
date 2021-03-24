//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTLayerData.h
// Created: Wed Mar 10 19:08:50 2021
//

#ifndef FBGEN_ANTLayerData_H
#define FBGEN_ANTLayerData_H

#include "ANTLayerBlendType.h"
#include "TimelineTrackData.h"

class ANTLayerData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818840;
	}
	ANTLayerBlendType m_BlendType; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ANTLayerData_H
