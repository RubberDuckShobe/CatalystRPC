//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowExtrusionDataEntityData.h
// Created: Wed Mar 10 19:01:28 2021
//

#ifndef FBGEN_ShadowExtrusionDataEntityData_H
#define FBGEN_ShadowExtrusionDataEntityData_H

#include "ShadowExtrusionAsset.h"
#include "Realm.h"
#include "EntityData.h"

class ShadowExtrusionDataEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142892510;
	}
	ShadowExtrusionAsset* m_ExtrusionData; // 0x18
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ShadowExtrusionDataEntityData_H
