//
// Generated with FrostbiteGen by Chod
// File: SDK\BoidsProximityTrackerEntityData.h
// Created: Wed Mar 10 19:08:27 2021
//

#ifndef FBGEN_BoidsProximityTrackerEntityData_H
#define FBGEN_BoidsProximityTrackerEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "Vec3.h"
#include "EntityData.h"

class BoidsProximityTrackerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894930;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_TrackedPosition; // 0x20
	Vec3 m_ClosestLine1Offset; // 0x60
	Vec3 m_ClosestLine2Offset; // 0x70
	float m_SuppressCrowdMembers; // 0x80
	float m_UpdatesPerSecond; // 0x84
	float m_MembersStickyDistance; // 0x88
	float m_LinesStickyDistance; // 0x8c
	bool m_Enabled; // 0x90
	bool m_InterpolateTransforms; // 0x91
	unsigned char _0x92[0xe];
}; // size = 0xa0

#endif // FBGEN_BoidsProximityTrackerEntityData_H
