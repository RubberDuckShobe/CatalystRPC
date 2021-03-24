//
// Generated with FrostbiteGen by Chod
// File: SDK\AntAnimatableEntityData.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AntAnimatableEntityData_H
#define FBGEN_AntAnimatableEntityData_H

#include "Realm.h"
#include "SubRealm.h"
#include "AntAnimationHandlerData.h"
#include "AnimationControlModeEnum.h"
#include "JointOutputModeEnum.h"
#include "Array.h"
#include "EntityData.h"

class AntAnimatableEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818B40;
	}
	Realm m_Realm; // 0x18
	SubRealm m_SubRealm; // 0x1c
	AntAnimationHandlerData m_AnimationData; // 0x20
	AnimationControlModeEnum m_InitialAnimationControlMode; // 0x160
	JointOutputModeEnum m_JointOutputMode; // 0x164
	Array<int> m_JointOutputPropertyIds; // 0x168
	bool m_AutoActivate; // 0x170
	bool m_InitialForceDisableCulling; // 0x171
	bool m_DisableAutoDistanceCulling; // 0x172
	bool m_Interpolation; // 0x173
	unsigned char _0x174[0x4];
}; // size = 0x178

#endif // FBGEN_AntAnimatableEntityData_H
