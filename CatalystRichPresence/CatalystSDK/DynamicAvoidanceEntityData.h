//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicAvoidanceEntityData.h
// Created: Wed Mar 10 19:07:06 2021
//

#ifndef FBGEN_DynamicAvoidanceEntityData_H
#define FBGEN_DynamicAvoidanceEntityData_H

#include "DynamicAvoidanceMode.h"
#include "AntDynamicAvoidanceBinding.h"
#include "Realm.h"
#include "EntityData.h"

class DynamicAvoidanceEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811280;
	}
	DynamicAvoidanceMode m_RepelOthers; // 0x18
	DynamicAvoidanceMode m_ReportPredictedCollision; // 0x1c
	float m_CollisionRadius; // 0x20
	AntDynamicAvoidanceBinding m_AntBinding; // 0x24
	Realm m_Realm; // 0x74
	bool m_AffectedByRepellingForce; // 0x78
	bool m_PredictedByOthers; // 0x79
	unsigned char _0x7a[0x6];
}; // size = 0x80

#endif // FBGEN_DynamicAvoidanceEntityData_H
