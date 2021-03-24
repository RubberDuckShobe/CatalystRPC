//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicAOComponentData.h
// Created: Wed Mar 10 19:07:06 2021
//

#ifndef FBGEN_DynamicAOComponentData_H
#define FBGEN_DynamicAOComponentData_H

#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class DynamicAOComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846BE0;
	}
	Realm m_Realm; // 0x80
	float m_DynamicAOFactor; // 0x84
	float m_SsaoFade; // 0x88
	float m_SsaoRadius; // 0x8c
	float m_SsaoMaxDistanceInner; // 0x90
	float m_SsaoMaxDistanceOuter; // 0x94
	float m_HbaoRadius; // 0x98
	float m_HbaoAngleBias; // 0x9c
	float m_HbaoAttenuation; // 0xa0
	float m_HbaoContrast; // 0xa4
	float m_HbaoMaxFootprintRadius; // 0xa8
	float m_HbaoPowerExponent; // 0xac
	bool m_Enable; // 0xb0
	bool m_AffectOutdoorLight; // 0xb1
	bool m_AffectLocalLight; // 0xb2
	unsigned char _0xb3[0xd];
}; // size = 0xc0

#endif // FBGEN_DynamicAOComponentData_H
