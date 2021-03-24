//
// Generated with FrostbiteGen by Chod
// File: SDK\TurnInPlaceTune.h
// Created: Wed Mar 10 19:00:03 2021
//

#ifndef FBGEN_TurnInPlaceTune_H
#define FBGEN_TurnInPlaceTune_H

#include "Asset.h"

class TurnInPlaceTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829B50;
	}
	float m_whenMovingAngle; // 0x18
	float m_whenStoppedAngle; // 0x1c
	float m_speed; // 0x20
	bool m_enableUTurn; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_TurnInPlaceTune_H
