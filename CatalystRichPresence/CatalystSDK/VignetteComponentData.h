//
// Generated with FrostbiteGen by Chod
// File: SDK\VignetteComponentData.h
// Created: Wed Mar 10 18:59:14 2021
//

#ifndef FBGEN_VignetteComponentData_H
#define FBGEN_VignetteComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "Vec2.h"
#include "VisualEnvironmentComponentData.h"

class VignetteComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838360;
	}
	Vec3 m_Color; // 0x80
	Realm m_Realm; // 0x90
	Vec2 m_Scale; // 0x94
	float m_Exponent; // 0x9c
	float m_Opacity; // 0xa0
	bool m_Enable; // 0xa4
	unsigned char _0xa5[0xb];
}; // size = 0xb0

#endif // FBGEN_VignetteComponentData_H
