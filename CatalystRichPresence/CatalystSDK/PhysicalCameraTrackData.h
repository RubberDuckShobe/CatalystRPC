//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicalCameraTrackData.h
// Created: Wed Mar 10 19:03:11 2021
//

#ifndef FBGEN_PhysicalCameraTrackData_H
#define FBGEN_PhysicalCameraTrackData_H

#include "CameraLensPreset.h"
#include "ExposureMode.h"
#include "Array.h"
#include "CameraTrackBaseData.h"

class PhysicalCameraTrackData :
	public CameraTrackBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823D00;
	}
	CameraLensPreset* m_PhysicalCamera; // 0x28
	ExposureMode m_ExposureMode; // 0x30
	unsigned char _0x34[0x4];
	Array<TimelineTrackData*> m_Children; // 0x38
}; // size = 0x40

#endif // FBGEN_PhysicalCameraTrackData_H
