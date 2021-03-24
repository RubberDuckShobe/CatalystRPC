//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUICrossfadeEntityData.h
// Created: Wed Mar 10 19:03:39 2021
//

#ifndef FBGEN_PamUICrossfadeEntityData_H
#define FBGEN_PamUICrossfadeEntityData_H

#include "Realm.h"
#include "Vec4.h"
#include "Vec3.h"
#include "LinearTransform.h"
#include "Array.h"
#include "Vec2.h"
#include "EntityData.h"

class PamUICrossfadeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AEE0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_DefaultVec3; // 0x20
	Vec4 m_DefaultVec4; // 0x30
	Vec3 m_DefaultColor; // 0x40
	LinearTransform m_DefaultTransform; // 0x50
	float m_Timescale; // 0x90
	float m_PauseMarker; // 0x94
	Array<PamUICrossfadeTrack> m_Tracks; // 0x98
	float m_DefaultFloat; // 0xa0
	int m_DefaultInt; // 0xa4
	Vec2 m_DefaultVec2; // 0xa8
	float m_DefaultAlpha; // 0xb0
	bool m_ResetOnPlay; // 0xb4
	bool m_AutoPauseAtMarker; // 0xb5
	bool m_UseRealTimeClock; // 0xb6
	unsigned char _0xb7[0x9];
}; // size = 0xc0

#endif // FBGEN_PamUICrossfadeEntityData_H
