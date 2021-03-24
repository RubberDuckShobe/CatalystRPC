//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraDirectorKeyframe.h
// Created: Wed Mar 10 19:08:21 2021
//

#ifndef FBGEN_CameraDirectorKeyframe_H
#define FBGEN_CameraDirectorKeyframe_H

#include "CameraTrackBaseData.h"
#include "CameraDirectorTrackBaseData.h"
#include "DataContainer.h"

class CameraDirectorKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142824240;
	}
	float m_Time; // 0x10
	unsigned char _0x14[0x4];
	CameraTrackBaseData* m_CameraTrack; // 0x18
	CameraDirectorTrackBaseData* m_ParentDirectorTrack; // 0x20
}; // size = 0x28

#endif // FBGEN_CameraDirectorKeyframe_H
