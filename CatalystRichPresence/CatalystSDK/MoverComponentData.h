//
// Generated with FrostbiteGen by Chod
// File: SDK\MoverComponentData.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MoverComponentData_H
#define FBGEN_MoverComponentData_H

#include "EntityMoverType.h"
#include "MoverTune.h"
#include "RadiusData.h"
#include "AntRef.h"
#include "GameComponentData.h"

class MoverComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829190;
	}
	EntityMoverType m_type; // 0x70
	unsigned char _0x74[0x4];
	MoverTune* m_moverTune; // 0x78
	float m_goalPlanFailureTreshold; // 0x80
	float m_goalHeightFailureTreshold; // 0x84
	RadiusData* m_radiusData; // 0x88
	float m_MoveSpeedModifier; // 0x90
	AntRef m_DesiredMovementAngleGameState; // 0x94
	AntRef m_DesiredRelativeMovementAngleGameState; // 0xa8
	AntRef m_DesiredMovementSpeedGameState; // 0xbc
	AntRef m_DesiredFacingAngleGameState; // 0xd0
	AntRef m_DesiredRelativeFacingAngleGameState; // 0xe4
	AntRef m_DistanceToGoalGameState; // 0xf8
	bool m_EnablePuppetMode; // 0x10c
	bool m_LockToNavGraph; // 0x10d
	unsigned char _0x10e[0x2];
}; // size = 0x110

#endif // FBGEN_MoverComponentData_H
