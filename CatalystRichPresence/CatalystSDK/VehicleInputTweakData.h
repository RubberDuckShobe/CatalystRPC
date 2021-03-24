//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleInputTweakData.h
// Created: Wed Mar 10 18:59:19 2021
//

#ifndef FBGEN_VehicleInputTweakData_H
#define FBGEN_VehicleInputTweakData_H

#include "VehicleInputTweakType.h"
#include "DataContainer.h"

class VehicleInputTweakData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CBC0;
	}
	VehicleInputTweakType m_InputTweakType; // 0x10
	float m_MinSpeed; // 0x14
	float m_MaxSpeed; // 0x18
	float m_MinSpeedScale; // 0x1c
	float m_MaxSpeedScale; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_VehicleInputTweakData_H
