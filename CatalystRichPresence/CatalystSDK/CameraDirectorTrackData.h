//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraDirectorTrackData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraDirectorTrackData_H
#define FBGEN_CameraDirectorTrackData_H

#include "Array.h"
#include "CameraDirectorTrackBaseData.h"

class CameraDirectorTrackData :
	public CameraDirectorTrackBaseData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142824180;
	}
	Array<CameraDirectorKeyframe*> m_Keyframes; // 0x38
}; // size = 0x40

#endif // FBGEN_CameraDirectorTrackData_H
