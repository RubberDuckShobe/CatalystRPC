//
// Generated with FrostbiteGen by Chod
// File: SDK\PoseTrackData.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PoseTrackData_H
#define FBGEN_PoseTrackData_H

#include "Array.h"
#include "ANTLayerData.h"

class PoseTrackData :
	public ANTLayerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428239A0;
	}
	Array<PoseTrackKeyframe*> m_Keyframes; // 0x30
}; // size = 0x38

#endif // FBGEN_PoseTrackData_H
