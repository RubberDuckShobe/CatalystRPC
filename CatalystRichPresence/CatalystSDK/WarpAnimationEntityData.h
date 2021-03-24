//
// Generated with FrostbiteGen by Chod
// File: SDK\WarpAnimationEntityData.h
// Created: Wed Mar 10 18:58:54 2021
//

#ifndef FBGEN_WarpAnimationEntityData_H
#define FBGEN_WarpAnimationEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "WarpAnimationBinding.h"
#include "GameplayBones.h"
#include "EntityData.h"

class WarpAnimationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821C60;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_ConnectTransform; // 0x20
	WarpAnimationBinding m_WarpBinding; // 0x60
	int m_AnimationEntitySpacePriority; // 0xec
	GameplayBones m_BoneToAlign; // 0xf0
	bool m_RequireAnimationWeight; // 0xf4
	bool m_ForceAnimationTransform; // 0xf5
	bool m_ExternalConnectTransform; // 0xf6
	unsigned char _0xf7[0x9];
}; // size = 0x100

#endif // FBGEN_WarpAnimationEntityData_H
