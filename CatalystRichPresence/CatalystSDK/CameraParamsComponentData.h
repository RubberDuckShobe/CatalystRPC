//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraParamsComponentData.h
// Created: Wed Mar 10 19:08:19 2021
//

#ifndef FBGEN_CameraParamsComponentData_H
#define FBGEN_CameraParamsComponentData_H

#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class CameraParamsComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846A60;
	}
	Realm m_Realm; // 0x80
	float m_ViewDistance; // 0x84
	float m_NearPlane; // 0x88
	float m_SunShadowmapViewDistance; // 0x8c
	int m_ForceLod; // 0x90
	float m_ShadowDistanceScale; // 0x94
	float m_CullScreenAreaScale; // 0x98
	unsigned char _0x9c[0x4];
}; // size = 0xa0

#endif // FBGEN_CameraParamsComponentData_H
