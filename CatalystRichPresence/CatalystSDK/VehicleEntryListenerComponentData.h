//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleEntryListenerComponentData.h
// Created: Wed Mar 10 18:59:21 2021
//

#ifndef FBGEN_VehicleEntryListenerComponentData_H
#define FBGEN_VehicleEntryListenerComponentData_H

#include "VehicleEntryListenerBinding.h"
#include "VehicleCameraControlBinding.h"
#include "VehicleEntryListenerReadBinding.h"
#include "GameComponentData.h"

class VehicleEntryListenerComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DD30;
	}
	VehicleEntryListenerBinding m_VehicleEntryListener; // 0x70
	VehicleCameraControlBinding m_VehicleCameraControl; // 0x200
	VehicleEntryListenerReadBinding m_ReadBinding; // 0x214
	int m_AnimationEntitySpacePriority; // 0x264
	float m_AnimationWheelTransformDelay; // 0x268
	unsigned char _0x26c[0x4];
}; // size = 0x270

#endif // FBGEN_VehicleEntryListenerComponentData_H
