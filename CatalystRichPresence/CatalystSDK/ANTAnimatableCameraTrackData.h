//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTAnimatableCameraTrackData.h
// Created: Wed Mar 10 19:08:52 2021
//

#ifndef FBGEN_ANTAnimatableCameraTrackData_H
#define FBGEN_ANTAnimatableCameraTrackData_H

#include "LayeredTransformTrackData.h"
#include "ANTControlTrackData.h"
#include "AntRef.h"
#include "PhysicalCameraTrackData.h"

class ANTAnimatableCameraTrackData :
	public PhysicalCameraTrackData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818A20;
	}
	LayeredTransformTrackData* m_LayeredTransformTrack; // 0x40
	ANTControlTrackData* m_AntControlTrack; // 0x48
	AntRef m_CameraActor; // 0x50
	unsigned char _0x64[0x4];
}; // size = 0x68

#endif // FBGEN_ANTAnimatableCameraTrackData_H
