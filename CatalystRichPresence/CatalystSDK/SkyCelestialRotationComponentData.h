//
// Generated with FrostbiteGen by Chod
// File: SDK\SkyCelestialRotationComponentData.h
// Created: Wed Mar 10 19:01:22 2021
//

#ifndef FBGEN_SkyCelestialRotationComponentData_H
#define FBGEN_SkyCelestialRotationComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class SkyCelestialRotationComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846760;
	}
	Vec3 m_RotationAxis; // 0x80
	Realm m_Realm; // 0x90
	float m_Rotation; // 0x94
	bool m_Enable; // 0x98
	unsigned char _0x99[0x7];
}; // size = 0xa0

#endif // FBGEN_SkyCelestialRotationComponentData_H
