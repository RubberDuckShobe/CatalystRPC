//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleEntryListenerReadBinding.h
// Created: Wed Mar 10 18:59:20 2021
//

#ifndef FBGEN_VehicleEntryListenerReadBinding_H
#define FBGEN_VehicleEntryListenerReadBinding_H

#include "AntRef.h"
struct VehicleEntryListenerReadBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D6C8;
	}
	AntRef m_InVehicleNode; // 0x0
	AntRef m_VehicleAlignIndex; // 0x14
	AntRef m_VehicleEntryIndexUpdated; // 0x28
	AntRef m_VehicleAllowedToSwitchSeat; // 0x3c
}; // size = 0x50

#endif // FBGEN_VehicleEntryListenerReadBinding_H
