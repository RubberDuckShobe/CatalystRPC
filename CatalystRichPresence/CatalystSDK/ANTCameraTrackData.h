//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTCameraTrackData.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTCameraTrackData_H
#define FBGEN_ANTCameraTrackData_H

#include "EntityTrackData.h"

class ANTCameraTrackData :
	public EntityTrackData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E110;
	}
	const char* m_TransformBoneName; // 0x40
	const char* m_FOVBoneName; // 0x48
	const char* m_DOFBoneName; // 0x50
}; // size = 0x58

#endif // FBGEN_ANTCameraTrackData_H
