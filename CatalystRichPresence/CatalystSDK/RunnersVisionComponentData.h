//
// Generated with FrostbiteGen by Chod
// File: SDK\RunnersVisionComponentData.h
// Created: Wed Mar 10 19:02:33 2021
//

#ifndef FBGEN_RunnersVisionComponentData_H
#define FBGEN_RunnersVisionComponentData_H

#include "Vec4.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class RunnersVisionComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846580;
	}
	Vec4 m_OverlayColor; // 0x80
	Realm m_Realm; // 0x90
	float m_AlphaBlendAmount; // 0x94
	float m_AdditiveBlendAmount; // 0x98
	bool m_ColorBurnEnable; // 0x9c
	unsigned char _0x9d[0x3];
}; // size = 0xa0

#endif // FBGEN_RunnersVisionComponentData_H
