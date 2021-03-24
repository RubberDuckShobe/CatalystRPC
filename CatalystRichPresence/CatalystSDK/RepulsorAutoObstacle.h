//
// Generated with FrostbiteGen by Chod
// File: SDK\RepulsorAutoObstacle.h
// Created: Wed Mar 10 19:02:36 2021
//

#ifndef FBGEN_RepulsorAutoObstacle_H
#define FBGEN_RepulsorAutoObstacle_H

#include "Asset.h"

class RepulsorAutoObstacle :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829970;
	}
	float m_ImmobilityTime; // 0x18
	float m_ObstacleRadiusScale; // 0x1c
	float m_ObstacleHeightScale; // 0x20
	bool m_Enable; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_RepulsorAutoObstacle_H
