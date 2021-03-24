//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerCameraEntityData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlayerCameraEntityData_H
#define FBGEN_PlayerCameraEntityData_H

#include "TargetMode.h"
#include "CameraEntityBaseData.h"

class PlayerCameraEntityData :
	public CameraEntityBaseData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428172E0;
	}
	TargetMode m_SoldierTargetMode; // 0xa0
	unsigned int m_SoldierCameraIndex; // 0xa4
	TargetMode m_VehicleTargetMode; // 0xa8
	unsigned int m_VehicleCameraIndex; // 0xac
	float m_CameraSmoothingFactor; // 0xb0
	bool m_ReleaseControlIfTargetLost; // 0xb4
	bool m_ShouldTargetControllable; // 0xb5
	bool m_ShouldTargetVehicleDriverEntry; // 0xb6
	bool m_ShouldTargetExtraPlayerInDoublePlayerEvent; // 0xb7
	unsigned char _0xb8[0x8];
}; // size = 0xc0

#endif // FBGEN_PlayerCameraEntityData_H
