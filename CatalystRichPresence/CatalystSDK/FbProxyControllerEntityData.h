//
// Generated with FrostbiteGen by Chod
// File: SDK\FbProxyControllerEntityData.h
// Created: Wed Mar 10 19:06:48 2021
//

#ifndef FBGEN_FbProxyControllerEntityData_H
#define FBGEN_FbProxyControllerEntityData_H

#include "Realm.h"
#include "FbProxyControllerEntityBinding.h"
#include "AntRef.h"
#include "EntityData.h"

class FbProxyControllerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810FE0;
	}
	Realm m_Realm; // 0x18
	FbProxyControllerEntityBinding m_CannedAnimBinding; // 0x1c
	int m_AnimationEntitySpacePriority; // 0x6c
	AntRef m_PointerGameState; // 0x70
	bool m_AlwaysClearEntitySpaceWhenInScenario; // 0x84
	unsigned char _0x85[0x3];
}; // size = 0x88

#endif // FBGEN_FbProxyControllerEntityData_H
