//
// Generated with FrostbiteGen by Chod
// File: SDK\AntDrivenComponentData.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AntDrivenComponentData_H
#define FBGEN_AntDrivenComponentData_H

#include "GameComponentData.h"

class AntDrivenComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817100;
	}
	bool m_ResetControllerTreeOnTeleport; // 0x70
	bool m_ZeroTrajectoryVelocityOnTeleport; // 0x71
	unsigned char _0x72[0xe];
}; // size = 0x80

#endif // FBGEN_AntDrivenComponentData_H
