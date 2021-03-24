//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFinisherCameraDirectorTrackData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamFinisherCameraDirectorTrackData_H
#define FBGEN_PamFinisherCameraDirectorTrackData_H

#include "CameraTrackBaseData.h"
#include "CameraDirectorTrackData.h"

class PamFinisherCameraDirectorTrackData :
	public CameraDirectorTrackData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428523A0;
	}
	CameraTrackBaseData* m_FallbackCamera; // 0x40
}; // size = 0x48

#endif // FBGEN_PamFinisherCameraDirectorTrackData_H
