//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformPartPropertyKey.h
// Created: Wed Mar 10 19:00:07 2021
//

#ifndef FBGEN_TransformPartPropertyKey_H
#define FBGEN_TransformPartPropertyKey_H

#include "AnimTangentType.h"
struct TransformPartPropertyKey
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA0B8;
	}
	float m_Value; // 0x0
	AnimTangentType m_InAnimTangentType; // 0x4
	float m_InAngle; // 0x8
	float m_InWeight; // 0xc
	AnimTangentType m_OutAnimTangentType; // 0x10
	float m_OutAngle; // 0x14
	float m_OutWeight; // 0x18
}; // size = 0x1c

#endif // FBGEN_TransformPartPropertyKey_H
