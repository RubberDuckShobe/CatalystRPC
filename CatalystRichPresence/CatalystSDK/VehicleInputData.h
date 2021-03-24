//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleInputData.h
// Created: Wed Mar 10 18:59:20 2021
//

#ifndef FBGEN_VehicleInputData_H
#define FBGEN_VehicleInputData_H

struct VehicleInputData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BDE0;
	}
	float m_ThrottleDeadzone; // 0x0
	float m_BrakeDeadzone; // 0x4
	float m_YawDeadzone; // 0x8
	float m_PitchDeadzone; // 0xc
	float m_RollDeadzone; // 0x10
	float m_ThrottleInertiaOutDuration; // 0x14
	float m_ThrottleInertiaInDuration; // 0x18
	float m_ThrottleInertiaMinRatio; // 0x1c
	float m_BrakeInertiaOutDuration; // 0x20
	float m_BrakeInertiaInDuration; // 0x24
	float m_BrakeInertiaMinRatio; // 0x28
	float m_YawInertiaOutDuration; // 0x2c
	float m_YawInertiaInDuration; // 0x30
	float m_YawInertiaMinRatio; // 0x34
	float m_PitchInertiaOutDuration; // 0x38
	float m_PitchInertiaInDuration; // 0x3c
	float m_PitchInertiaMinRatio; // 0x40
	float m_RollInertiaOutDuration; // 0x44
	float m_RollInertiaInDuration; // 0x48
	float m_RollInertiaMinRatio; // 0x4c
}; // size = 0x50

#endif // FBGEN_VehicleInputData_H
