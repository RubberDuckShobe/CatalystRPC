//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCameraTrackData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamCameraTrackData_H
#define FBGEN_PamCameraTrackData_H

#include "PamLookAtTrackData.h"
#include "CameraTrackData.h"

class PamCameraTrackData :
	public CameraTrackData // size = 0x50
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852400;
	}
	PamLookAtTrackData* m_LookAtTrack; // 0x50
	bool m_IsFirstPerson; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_PamCameraTrackData_H
