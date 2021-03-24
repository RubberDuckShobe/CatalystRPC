//
// Generated with FrostbiteGen by Chod
// File: SDK\ControllableEntityData.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ControllableEntityData_H
#define FBGEN_ControllableEntityData_H

#include "TeamId.h"
#include "MaterialDecl.h"
#include "Array.h"
#include "GamePhysicsEntityData.h"

class ControllableEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810D40;
	}
	TeamId m_DefaultTeam; // 0x90
	float m_LowHealthThreshold; // 0x94
	MaterialDecl m_MaterialPair; // 0x98
	unsigned char _0x9c[0x4];
	Array<int> m_SuppressedInputs; // 0xa0
	bool m_UsePrediction; // 0xa8
	bool m_ResetTeamOnLastPlayerExits; // 0xa9
	bool m_Immortal; // 0xaa
	bool m_FakeImmortal; // 0xab
	bool m_ForceForegroundRendering; // 0xac
	unsigned char _0xad[0x3];
}; // size = 0xb0

#endif // FBGEN_ControllableEntityData_H
