//
// Generated with FrostbiteGen by Chod
// File: SDK\SubSurfaceScatteringComponentData.h
// Created: Wed Mar 10 19:00:43 2021
//

#ifndef FBGEN_SubSurfaceScatteringComponentData_H
#define FBGEN_SubSurfaceScatteringComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "SubSurfaceProfile.h"
#include "VisualEnvironmentComponentData.h"

class SubSurfaceScatteringComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846B80;
	}
	Vec3 m_SimpleSssColor; // 0x80
	Realm m_Realm; // 0x90
	float m_SimpleSssRolloffKeyLight; // 0x94
	float m_SimpleSssRolloffLocalLight; // 0x98
	SubSurfaceProfile m_Profile0; // 0x9c
	SubSurfaceProfile m_Profile1; // 0xc8
	SubSurfaceProfile m_Profile2; // 0xf4
	SubSurfaceProfile m_Profile3; // 0x120
	SubSurfaceProfile m_Profile4; // 0x14c
	SubSurfaceProfile m_Profile5; // 0x178
	SubSurfaceProfile m_Profile6; // 0x1a4
	SubSurfaceProfile m_ProfileOATS; // 0x1d0
	unsigned char _0x1fc[0x4];
}; // size = 0x200

#endif // FBGEN_SubSurfaceScatteringComponentData_H
