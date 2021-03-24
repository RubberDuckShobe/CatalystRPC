//
// Generated with FrostbiteGen by Chod
// File: SDK\ModelAnimationEntityData.h
// Created: Wed Mar 10 19:05:49 2021
//

#ifndef FBGEN_ModelAnimationEntityData_H
#define FBGEN_ModelAnimationEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "AntAnimationSetAsset.h"
#include "GameplayBones.h"
#include "ModelAnimationTransformType.h"
#include "ModelAnimationUpdateOrder.h"
#include "Array.h"
#include "EntityData.h"

class ModelAnimationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820F10;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_AnimationEntitySpace; // 0x20
	const char* m_DefaultAnimation; // 0x60
	int m_AnimationIndex; // 0x68
	unsigned char _0x6c[0x4];
	AntAnimationSetAsset* m_AnimationSet; // 0x70
	float m_ExternalTime; // 0x78
	float m_PlaybackSpeed; // 0x7c
	int m_InstanceSeed; // 0x80
	GameplayBones m_BoneToPlace; // 0x84
	ModelAnimationTransformType m_ModelAnimationTransformType; // 0x88
	ModelAnimationUpdateOrder m_JointWorldTransformUpdateOrder; // 0x8c
	Array<int> m_JointOutputFieldHashes; // 0x90
	bool m_AutoStart; // 0x98
	bool m_Looping; // 0x99
	bool m_ResetAfterStop; // 0x9a
	bool m_PlayFirstFrame; // 0x9b
	bool m_AnimationEntitySpaceActive; // 0x9c
	bool m_DisableCulling; // 0x9d
	bool m_EnableJointWorldTransformOutput; // 0x9e
	bool m_ShowDebugTransforms; // 0x9f
}; // size = 0xa0

#endif // FBGEN_ModelAnimationEntityData_H
