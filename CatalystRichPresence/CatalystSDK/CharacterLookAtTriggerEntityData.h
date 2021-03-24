//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterLookAtTriggerEntityData.h
// Created: Wed Mar 10 19:08:16 2021
//

#ifndef FBGEN_CharacterLookAtTriggerEntityData_H
#define FBGEN_CharacterLookAtTriggerEntityData_H

#include "TriggerEventEntityData.h"

class CharacterLookAtTriggerEntityData :
	public TriggerEventEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F410;
	}
	float m_FOV; // 0x70
	float m_MinDistanceToObject; // 0x74
	float m_MaxDistanceToObject; // 0x78
	bool m_StartTriggerLookingAt; // 0x7c
	bool m_CheckOcclusion; // 0x7d
	bool m_UseEntityDirection; // 0x7e
	unsigned char _0x7f[0x1];
}; // size = 0x80

#endif // FBGEN_CharacterLookAtTriggerEntityData_H
