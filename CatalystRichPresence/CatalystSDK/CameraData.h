//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraData.h
// Created: Wed Mar 10 19:08:21 2021
//

#ifndef FBGEN_CameraData_H
#define FBGEN_CameraData_H

#include "Vec3.h"
#include "LocalPlayerViewId.h"
#include "GameObjectData.h"

class CameraData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817820;
	}
	float m_PreFadeTime; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_OcclusionRayOffset; // 0x20
	float m_FadeTime; // 0x30
	float m_FadeWaitTime; // 0x34
	float m_NearPlane; // 0x38
	float m_ShadowViewDistanceScale; // 0x3c
	float m_SoundOcclusion; // 0x40
	float m_SoundListenerRadius; // 0x44
	float m_SoundListenerFov; // 0x48
	float m_ShakeFactor; // 0x4c
	LocalPlayerViewId m_ViewId; // 0x50
	bool m_StayFadedWhileStreaming; // 0x54
	unsigned char _0x55[0xb];
}; // size = 0x60

#endif // FBGEN_CameraData_H
