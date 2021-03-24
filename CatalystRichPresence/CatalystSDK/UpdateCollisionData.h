//
// Generated with FrostbiteGen by Chod
// File: SDK\UpdateCollisionData.h
// Created: Wed Mar 10 18:59:38 2021
//

#ifndef FBGEN_UpdateCollisionData_H
#define FBGEN_UpdateCollisionData_H

#include "EmitterCollisionMethod.h"
#include "EmitterCollisionPriority.h"
#include "EmitterTerrainSnapType.h"
#include "ProcessorData.h"

class UpdateCollisionData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DB300;
	}
	float m_Restitution; // 0x30
	float m_ReflectionBias; // 0x34
	float m_RestSpeedThreshold; // 0x38
	float m_Randomness; // 0x3c
	float m_CollisionRadiusFactor; // 0x40
	EmitterCollisionMethod m_Method; // 0x44
	EmitterCollisionPriority m_Priority; // 0x48
	float m_SnapOffsetBasedOnEmitter; // 0x4c
	float m_SnapRelativeOffsetFactor; // 0x50
	EmitterTerrainSnapType m_SnapType; // 0x54
	bool m_KillOnCollision; // 0x58
	bool m_SnapOnTerrain; // 0x59
	unsigned char _0x5a[0x6];
}; // size = 0x60

#endif // FBGEN_UpdateCollisionData_H
