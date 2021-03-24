//
// Generated with FrostbiteGen by Chod
// File: SDK\WarpAnimationComponentData.h
// Created: Wed Mar 10 18:58:54 2021
//

#ifndef FBGEN_WarpAnimationComponentData_H
#define FBGEN_WarpAnimationComponentData_H

#include "LinearTransform.h"
#include "WarpAnimationBinding.h"
#include "CannedAnimationBinding.h"
#include "GameplayBones.h"
#include "GameComponentData.h"

class WarpAnimationComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821CC0;
	}
	LinearTransform m_ConnectTransform; // 0x70
	WarpAnimationBinding m_WarpBinding; // 0xb0
	CannedAnimationBinding m_CannedAnimBinding; // 0x13c
	int m_AnimationEntitySpacePriority; // 0x218
	GameplayBones m_BoneToAlign; // 0x21c
	bool m_RequireAnimationWeight; // 0x220
	bool m_ForceAnimationTransform; // 0x221
	bool m_ExternalConnectTransform; // 0x222
	unsigned char _0x223[0xd];
}; // size = 0x230

#endif // FBGEN_WarpAnimationComponentData_H
