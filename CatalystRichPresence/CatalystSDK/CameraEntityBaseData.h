//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraEntityBaseData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraEntityBaseData_H
#define FBGEN_CameraEntityBaseData_H

#include "LocalPlayerViewId.h"
#include "CameraLensPreset.h"
#include "ExposureMode.h"
#include "SpatialEntityData.h"

class CameraEntityBaseData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817460;
	}
	const char* m_NameId; // 0x60
	int m_Priority; // 0x68
	LocalPlayerViewId m_ViewId; // 0x6c
	CameraLensPreset* m_PhysicalCamera; // 0x70
	float m_FocalLength; // 0x78
	float m_FocusDistance; // 0x7c
	float m_ExposureCompensation; // 0x80
	float m_Aperture; // 0x84
	float m_ShutterSpeed; // 0x88
	ExposureMode m_ExposureMode; // 0x8c
	float m_EV; // 0x90
	float m_ISO; // 0x94
	float m_SpotMeterScale; // 0x98
	bool m_Enabled; // 0x9c
	unsigned char _0x9d[0x3];
}; // size = 0xa0

#endif // FBGEN_CameraEntityBaseData_H
