//
// Generated with FrostbiteGen by Chod
// File: SDK\EngineConfigData.h
// Created: Wed Mar 10 19:07:00 2021
//

#ifndef FBGEN_EngineConfigData_H
#define FBGEN_EngineConfigData_H

#include "Array.h"
#include "Vec3.h"
#include "Boost.h"
#include "DataContainer.h"

class EngineConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CB00;
	}
	Array<float> m_RpmCurvePoints; // 0x10
	Array<float> m_TorqueCurvePoints; // 0x18
	Vec3 m_Position; // 0x20
	float m_RpmMin; // 0x30
	float m_RpmMax; // 0x34
	float m_RpmCut; // 0x38
	float m_EnginePowerMultiplier; // 0x3c
	float m_InternalAccelerationFactor; // 0x40
	float m_InternalDeaccelerationFactor; // 0x44
	float m_MaxReverseSpeed; // 0x48
	Boost m_Boost; // 0x4c
	float m_MaxVehicleHeightOffset; // 0x64
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_EngineConfigData_H
