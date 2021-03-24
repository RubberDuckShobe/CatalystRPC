//
// Generated with FrostbiteGen by Chod
// File: SDK\MoverTune.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MoverTune_H
#define FBGEN_MoverTune_H

#include "RadiusData.h"
#include "CautionTune.h"
#include "BlockageMode.h"
#include "AutoObstacleTune.h"
#include "PathCreationOptions.h"
#include "JumperTune.h"
#include "ProberTune.h"
#include "GoalTune.h"
#include "IdleTune.h"
#include "TurnInPlaceTune.h"
#include "RepulsionAccelerationTune.h"
#include "SurfaceOrientTune.h"
#include "FollowerTune.h"
#include "Asset.h"

class MoverTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829670;
	}
	float m_speed; // 0x18
	float m_maxSpeedFraction; // 0x1c
	RadiusData* m_radiusData; // 0x20
	float m_bulk; // 0x28
	float m_cruiseAcc; // 0x2c
	float m_startStopAcc; // 0x30
	int m_repulsorType; // 0x34
	float m_flockAcc; // 0x38
	float m_maxFlockAccDist; // 0x3c
	float m_pathAcc; // 0x40
	unsigned char _0x44[0x4];
	CautionTune* m_cautionTune; // 0x48
	float m_backpedalFraction; // 0x50
	unsigned int m_planLayer; // 0x54
	float m_pathSharingPenalty; // 0x58
	BlockageMode m_obstacleMode; // 0x5c
	unsigned int m_obstacleBlockageFlags; // 0x60
	unsigned char _0x64[0x4];
	AutoObstacleTune* m_autoObTune; // 0x68
	unsigned int m_repulsorBlockageFlags; // 0x70
	unsigned int m_repulsorIdentityFlags; // 0x74
	unsigned int m_linkUsageFlags; // 0x78
	unsigned char _0x7c[0x4];
	PathCreationOptions* m_pathOptions; // 0x80
	JumperTune* m_jumperTune; // 0x88
	ProberTune* m_proberTune; // 0x90
	GoalTune* m_goalTune; // 0x98
	IdleTune* m_idleTune; // 0xa0
	TurnInPlaceTune* m_turnInPlace; // 0xa8
	RepulsionAccelerationTune* m_repulsionAccelerationTune; // 0xb0
	SurfaceOrientTune* m_surfaceOrientTune; // 0xb8
	float m_sidestepFraction; // 0xc0
	unsigned int m_customGeoMatchFlags; // 0xc4
	FollowerTune* m_followerTune; // 0xc8
	bool m_exitPuppetInObstacles; // 0xd0
	bool m_allowDetour; // 0xd1
	bool m_clientMotion; // 0xd2
	unsigned char _0xd3[0x5];
}; // size = 0xd8

#endif // FBGEN_MoverTune_H
