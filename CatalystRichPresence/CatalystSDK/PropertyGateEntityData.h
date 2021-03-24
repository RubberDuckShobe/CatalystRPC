//
// Generated with FrostbiteGen by Chod
// File: SDK\PropertyGateEntityData.h
// Created: Wed Mar 10 19:02:50 2021
//

#ifndef FBGEN_PropertyGateEntityData_H
#define FBGEN_PropertyGateEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "Vec4.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PropertyGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E6110;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Vec3In; // 0x20
	Vec4 m_Vec4In; // 0x30
	LinearTransform m_TransformIn; // 0x40
	int m_IntIn; // 0x80
	float m_FloatIn; // 0x84
	bool m_Default; // 0x88
	bool m_WritePropertyOnOpenGate; // 0x89
	bool m_BoolIn; // 0x8a
	unsigned char _0x8b[0x5];
}; // size = 0x90

#endif // FBGEN_PropertyGateEntityData_H
