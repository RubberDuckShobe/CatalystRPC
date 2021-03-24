//
// Generated with FrostbiteGen by Chod
// File: SDK\MotionBlurComponentData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MotionBlurComponentData_H
#define FBGEN_MotionBlurComponentData_H

#include "Realm.h"
#include "Vec2.h"
#include "VisualEnvironmentComponentData.h"

class MotionBlurComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428468E0;
	}
	Realm m_Realm; // 0x80
	float m_MotionBlurScale; // 0x84
	float m_MotionBlurCutoffRadius; // 0x88
	float m_CutoffGradientScale; // 0x8c
	Vec2 m_RadialBlurCenter; // 0x90
	float m_RadialBlurOffset; // 0x98
	float m_CircularOffsetFactor; // 0x9c
	float m_RadialBlurScale; // 0xa0
	bool m_MotionBlurEnable; // 0xa4
	bool m_MotionBlurCentered; // 0xa5
	bool m_RadialBlurEnable; // 0xa6
	unsigned char _0xa7[0x9];
}; // size = 0xb0

#endif // FBGEN_MotionBlurComponentData_H
