//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraTrackData.h
// Created: Wed Mar 10 19:08:19 2021
//

#ifndef FBGEN_CameraTrackData_H
#define FBGEN_CameraTrackData_H

#include "LayeredTransformTrackData.h"
#include "FloatTrackData.h"
#include "PhysicalCameraTrackData.h"

class CameraTrackData :
	public PhysicalCameraTrackData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817280;
	}
	LayeredTransformTrackData* m_LayeredTransformTrack; // 0x40
	FloatTrackData* m_FovTrack; // 0x48
}; // size = 0x50

#endif // FBGEN_CameraTrackData_H
