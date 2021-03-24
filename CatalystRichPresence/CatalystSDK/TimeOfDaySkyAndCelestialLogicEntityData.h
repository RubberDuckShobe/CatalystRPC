//
// Generated with FrostbiteGen by Chod
// File: SDK\TimeOfDaySkyAndCelestialLogicEntityData.h
// Created: Wed Mar 10 19:00:17 2021
//

#ifndef FBGEN_TimeOfDaySkyAndCelestialLogicEntityData_H
#define FBGEN_TimeOfDaySkyAndCelestialLogicEntityData_H

#include "Vec3.h"
#include "AudioCurve.h"
#include "EntityData.h"

class TimeOfDaySkyAndCelestialLogicEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142896710;
	}
	float m_Time; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_RotationPlaneNormal; // 0x20
	float m_SunIntensity; // 0x30
	float m_MoonIntensity; // 0x34
	float m_MoonAngularOffset; // 0x38
	unsigned char _0x3c[0x4];
	AudioCurve m_OutdoorLightScale; // 0x40
	AudioCurve m_SunAngularRadius; // 0x50
	float m_SunAzimuthOffset; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_TimeOfDaySkyAndCelestialLogicEntityData_H
