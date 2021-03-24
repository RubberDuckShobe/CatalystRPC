//
// Generated with FrostbiteGen by Chod
// File: SDK\AutoObstacleTune.h
// Created: Wed Mar 10 19:08:34 2021
//

#ifndef FBGEN_AutoObstacleTune_H
#define FBGEN_AutoObstacleTune_H

#include "Asset.h"

class AutoObstacleTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428297F0;
	}
	float m_delay; // 0x18
	unsigned int m_obstacleBlockageFlags; // 0x1c
	bool m_autoCreateObstacle; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_AutoObstacleTune_H
