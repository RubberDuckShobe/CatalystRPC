//
// Generated with FrostbiteGen by Chod
// File: SDK\HealthStateData.h
// Created: Wed Mar 10 19:06:35 2021
//

#ifndef FBGEN_HealthStateData_H
#define FBGEN_HealthStateData_H

#include "Array.h"
#include "ObjectBlueprint.h"
#include "BangerSpawnImpulseParams.h"
#include "DataContainer.h"

class HealthStateData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816C20;
	}
	Array<GameObjectData*> m_Objects; // 0x10
	Array<NetworkableLoosePartPhysicsData*> m_LoosePartPhysics; // 0x18
	ObjectBlueprint* m_SpawnedBangerBlueprint; // 0x20
	BangerSpawnImpulseParams* m_SpawnedBangerImpulseParams; // 0x28
	float m_Health; // 0x30
	unsigned int m_PartIndex; // 0x34
	bool m_CopyDamageToBanger; // 0x38
	bool m_PhysicsEnabled; // 0x39
	bool m_CanSupportOtherParts; // 0x3a
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_HealthStateData_H
