//
// Generated with FrostbiteGen by Chod
// File: SDK\InterdictionFieldLocatorEntityData.h
// Created: Wed Mar 10 19:06:26 2021
//

#ifndef FBGEN_InterdictionFieldLocatorEntityData_H
#define FBGEN_InterdictionFieldLocatorEntityData_H

#include "Realm.h"
#include "Array.h"
#include "InterdictionFieldLocatorPlacementBehavior.h"
#include "SpatialEntityData.h"

class InterdictionFieldLocatorEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286CF10;
	}
	Realm m_Realm; // 0x60
	unsigned char _0x64[0x4];
	Array<float> m_FieldRegionWeights; // 0x68
	float m_FallbackRadius; // 0x70
	unsigned char _0x74[0x4];
	Array<InterdictionFieldLocatorCondition*> m_Conditions; // 0x78
	InterdictionFieldLocatorPlacementBehavior m_PlacementBehavior; // 0x80
	float m_ChanceToNotFire; // 0x84
	bool m_SnapToGround; // 0x88
	bool m_FireOnce; // 0x89
	unsigned char _0x8a[0x6];
}; // size = 0x90

#endif // FBGEN_InterdictionFieldLocatorEntityData_H
