//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicalCameraTrackUpdateInfo.h
// Created: Wed Mar 10 19:03:11 2021
//

#ifndef FBGEN_PhysicalCameraTrackUpdateInfo_H
#define FBGEN_PhysicalCameraTrackUpdateInfo_H

#include "LinearTransform.h"
struct PhysicalCameraTrackUpdateInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823740;
	}
	LinearTransform m_Transform; // 0x0
	float m_FieldOfView; // 0x40
	float m_FocalLength; // 0x44
	float m_FocusDistance; // 0x48
	float m_ExposureCompensation; // 0x4c
	float m_Aperture; // 0x50
	float m_ShutterSpeed; // 0x54
	float m_EV; // 0x58
	float m_ISO; // 0x5c
}; // size = 0x60

#endif // FBGEN_PhysicalCameraTrackUpdateInfo_H
