//
// Generated with FrostbiteGen by Chod
// File: SDK\AreaQueryEntityData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_AreaQueryEntityData_H
#define FBGEN_AreaQueryEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class AreaQueryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280ADF0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_GeometryTransform; // 0x20
	float m_Radius; // 0x60
	bool m_Enabled; // 0x64
	bool m_UseCharacterEntity; // 0x65
	bool m_UseRadiusWithGeometryTransform; // 0x66
	bool m_QueryUsingExtraPlayerInDoublePlayerEvent; // 0x67
	bool m_OnlyQueryIfOnDifferentTeams; // 0x68
	unsigned char _0x69[0x7];
}; // size = 0x70

#endif // FBGEN_AreaQueryEntityData_H
