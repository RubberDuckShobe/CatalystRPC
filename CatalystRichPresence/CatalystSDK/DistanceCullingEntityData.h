//
// Generated with FrostbiteGen by Chod
// File: SDK\DistanceCullingEntityData.h
// Created: Wed Mar 10 19:07:09 2021
//

#ifndef FBGEN_DistanceCullingEntityData_H
#define FBGEN_DistanceCullingEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class DistanceCullingEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2080;
	}
	Realm m_Realm; // 0x60
	float m_DistanceThreshold; // 0x64
	bool m_Enabled; // 0x68
	bool m_UseCharacterTransform; // 0x69
	bool m_TriggerOnExitOnDisabled; // 0x6a
	unsigned char _0x6b[0x5];
}; // size = 0x70

#endif // FBGEN_DistanceCullingEntityData_H
