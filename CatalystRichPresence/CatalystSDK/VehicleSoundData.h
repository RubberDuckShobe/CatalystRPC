//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleSoundData.h
// Created: Wed Mar 10 18:59:18 2021
//

#ifndef FBGEN_VehicleSoundData_H
#define FBGEN_VehicleSoundData_H

#include "SoundAsset.h"
#include "DataContainer.h"

class VehicleSoundData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DE50;
	}
	SoundAsset* m_BulletImpact; // 0x10
}; // size = 0x18

#endif // FBGEN_VehicleSoundData_H
