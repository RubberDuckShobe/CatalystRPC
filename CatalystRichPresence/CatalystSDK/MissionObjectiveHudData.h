//
// Generated with FrostbiteGen by Chod
// File: SDK\MissionObjectiveHudData.h
// Created: Wed Mar 10 19:05:52 2021
//

#ifndef FBGEN_MissionObjectiveHudData_H
#define FBGEN_MissionObjectiveHudData_H

#include "Vec3.h"
#include "Vec2.h"
#include "DataContainer.h"

class MissionObjectiveHudData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B570;
	}
	float m_CameraRotation; // 0x10
	float m_CameraFov; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_CameraPosition; // 0x20
	float m_CameraDistance; // 0x30
	float m_CameraLookDistance; // 0x34
	Vec2 m_VerticalBoundaries; // 0x38
	Vec2 m_HorizontalBoundaries; // 0x40
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_MissionObjectiveHudData_H
