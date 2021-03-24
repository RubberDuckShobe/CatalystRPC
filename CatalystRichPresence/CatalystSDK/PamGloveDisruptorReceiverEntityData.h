//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGloveDisruptorReceiverEntityData.h
// Created: Wed Mar 10 19:04:28 2021
//

#ifndef FBGEN_PamGloveDisruptorReceiverEntityData_H
#define FBGEN_PamGloveDisruptorReceiverEntityData_H

#include "GameplayBones.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamGloveDisruptorReceiverEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885100;
	}
	GameplayBones m_TransformBone; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
	float m_Distance; // 0x60
	float m_Angle; // 0x64
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_PamGloveDisruptorReceiverEntityData_H
