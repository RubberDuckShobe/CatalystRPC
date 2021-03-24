//
// Generated with FrostbiteGen by Chod
// File: SDK\RaycastDirectionEntityData.h
// Created: Wed Mar 10 19:02:42 2021
//

#ifndef FBGEN_RaycastDirectionEntityData_H
#define FBGEN_RaycastDirectionEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class RaycastDirectionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428787E0;
	}
	float m_RayHorizontalAngle; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
	float m_RayVerticalAngle; // 0x60
	float m_RayDistance; // 0x64
	bool m_ContinuousUpdate; // 0x68
	bool m_LockHorizontalRotation; // 0x69
	bool m_LockVerticalRotation; // 0x6a
	unsigned char _0x6b[0x5];
}; // size = 0x70

#endif // FBGEN_RaycastDirectionEntityData_H
