//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowControlComponentData.h
// Created: Wed Mar 10 19:01:29 2021
//

#ifndef FBGEN_ShadowControlComponentData_H
#define FBGEN_ShadowControlComponentData_H

#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class ShadowControlComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846640;
	}
	Realm m_Realm; // 0x80
	float m_SpotLightShadowMaxAngle; // 0x84
	float m_SpotLightShadowFadeOutRange; // 0x88
	bool m_Enable; // 0x8c
	unsigned char _0x8d[0x3];
}; // size = 0x90

#endif // FBGEN_ShadowControlComponentData_H
