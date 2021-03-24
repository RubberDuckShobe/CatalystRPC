//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationTurretRotationComponentData.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AnimationTurretRotationComponentData_H
#define FBGEN_AnimationTurretRotationComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class AnimationTurretRotationComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E270;
	}
	Array<TurretRotationInfo> m_Rotations; // 0x70
	int m_SoldierBaseIndex; // 0x78
	bool m_UnifiedBaseIndex; // 0x7c
	bool m_UseVehicleWorldTransform; // 0x7d
	bool m_OutputWorldTransform; // 0x7e
	unsigned char _0x7f[0x1];
}; // size = 0x80

#endif // FBGEN_AnimationTurretRotationComponentData_H
