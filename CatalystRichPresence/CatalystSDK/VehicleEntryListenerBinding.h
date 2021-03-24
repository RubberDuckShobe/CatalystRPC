//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleEntryListenerBinding.h
// Created: Wed Mar 10 18:59:21 2021
//

#ifndef FBGEN_VehicleEntryListenerBinding_H
#define FBGEN_VehicleEntryListenerBinding_H

#include "AntRef.h"
struct VehicleEntryListenerBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D6E8;
	}
	AntRef m_InVehicle; // 0x0
	AntRef m_InOpenEntry; // 0x14
	AntRef m_SpawnedInVehicle; // 0x28
	AntRef m_VehicleEnterDirection; // 0x3c
	AntRef m_ExitDirectionIndex; // 0x50
	AntRef m_VehicleSpeed; // 0x64
	AntRef m_VehicleEntryFire; // 0x78
	AntRef m_VehicleEntryYaw; // 0x8c
	AntRef m_VehicleEntryRelativeYaw; // 0xa0
	AntRef m_VehicleEntryPitch; // 0xb4
	AntRef m_VehicleEntryRoll; // 0xc8
	AntRef m_VehicleEntryRotation; // 0xdc
	AntRef m_VehicleEntryForceX; // 0xf0
	AntRef m_VehicleEntryForceY; // 0x104
	AntRef m_VehicleEntryForceZ; // 0x118
	AntRef m_VehiclePreviousEntryIndex; // 0x12c
	AntRef m_VehicleEntryIndex; // 0x140
	AntRef m_VehicleOpenEntryIndex; // 0x154
	AntRef m_InVehicleRetrigger; // 0x168
	AntRef m_VehicleEntryChooserIndex; // 0x17c
}; // size = 0x190

#endif // FBGEN_VehicleEntryListenerBinding_H
