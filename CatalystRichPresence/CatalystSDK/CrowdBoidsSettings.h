//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdBoidsSettings.h
// Created: Wed Mar 10 19:07:27 2021
//

#ifndef FBGEN_CrowdBoidsSettings_H
#define FBGEN_CrowdBoidsSettings_H

#include "CrowdBoidsBehaviour.h"
#include "Vec2.h"
#include "Asset.h"

class CrowdBoidsSettings :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894A50;
	}
	CrowdBoidsBehaviour m_Behaviour; // 0x18
	Vec2 m_SpeedRange; // 0x1c
	float m_MemberRadius; // 0x24
	float m_TurningRate; // 0x28
	float m_MaxAcceleration; // 0x2c
	float m_MaxDeceleration; // 0x30
	Vec2 m_AvoidanceDistance; // 0x34
	float m_AvoidanceSuppressDistance; // 0x3c
	Vec2 m_SideOffsetRange; // 0x40
	int m_SideOffsetDiscreteSteps; // 0x48
	float m_SideOffsetJitter; // 0x4c
	bool m_AvoidanceEnabled; // 0x50
	bool m_MemberArrivedEventEnabled; // 0x51
	unsigned char _0x52[0x6];
}; // size = 0x58

#endif // FBGEN_CrowdBoidsSettings_H
