//
// Generated with FrostbiteGen by Chod
// File: SDK\UnderFireTriggerEntityData.h
// Created: Wed Mar 10 18:59:44 2021
//

#ifndef FBGEN_UnderFireTriggerEntityData_H
#define FBGEN_UnderFireTriggerEntityData_H

#include "MaterialDecl.h"
#include "AreaTriggerInclude.h"
#include "TriggerEntityData.h"

class UnderFireTriggerEntityData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F470;
	}
	float m_Radius; // 0x70
	float m_CoolDownTime; // 0x74
	MaterialDecl m_TriggerOnMaterialOnly; // 0x78
	AreaTriggerInclude m_TriggeredBy; // 0x7c
	bool m_UseTriggerOnMaterialOnly; // 0x80
	bool m_GeometriesFollowObject; // 0x81
	bool m_DisableIfTrackEntityIsLost; // 0x82
	bool m_RandomYaw; // 0x83
	bool m_IndicateHit; // 0x84
	unsigned char _0x85[0xb];
}; // size = 0x90

#endif // FBGEN_UnderFireTriggerEntityData_H
