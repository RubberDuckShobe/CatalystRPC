//
// Generated with FrostbiteGen by Chod
// File: SDK\ScreenEffectComponentData.h
// Created: Wed Mar 10 19:02:30 2021
//

#ifndef FBGEN_ScreenEffectComponentData_H
#define FBGEN_ScreenEffectComponentData_H

#include "Vec4.h"
#include "Realm.h"
#include "ScreenEffectFrameType.h"
#include "SurfaceShaderBaseAsset.h"
#include "VisualEnvironmentComponentData.h"

class ScreenEffectComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846A00;
	}
	Vec4 m_ScreenEffectParams; // 0x80
	Realm m_Realm; // 0x90
	ScreenEffectFrameType m_FrameType; // 0x94
	SurfaceShaderBaseAsset* m_Shader; // 0x98
	float m_FrameWidth; // 0xa0
	float m_OuterFrameOpacity; // 0xa4
	float m_InnerFrameOpacity; // 0xa8
	float m_Angle; // 0xac
}; // size = 0xb0

#endif // FBGEN_ScreenEffectComponentData_H
