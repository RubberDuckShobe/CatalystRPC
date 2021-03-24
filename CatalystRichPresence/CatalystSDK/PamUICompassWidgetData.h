//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICompassWidgetData.h
// Created: Wed Mar 10 19:03:39 2021
//

#ifndef FBGEN_PamUICompassWidgetData_H
#define FBGEN_PamUICompassWidgetData_H

#include "Vec3.h"
#include "PamUIWidgetEntityData.h"

class PamUICompassWidgetData :
	public PamUIWidgetEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288D9C0;
	}
	Vec3 m_NearOffset; // 0x90
	Vec3 m_MiddleOffset; // 0xa0
	Vec3 m_FarOffset; // 0xb0
	Vec3 m_CameraForward; // 0xc0
	Vec3 m_CameraUp; // 0xd0
	Vec3 m_TargetDirection; // 0xe0
	float m_NearWeight; // 0xf0
	float m_MiddleWeight; // 0xf4
	float m_FarWeight; // 0xf8
	bool m_FlipYAxis; // 0xfc
	unsigned char _0xfd[0x3];
}; // size = 0x100

#endif // FBGEN_PamUICompassWidgetData_H
