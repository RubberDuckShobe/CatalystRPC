//
// Generated with FrostbiteGen by Chod
// File: SDK\AimAssistCollisionBoneSnapAimData.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AimAssistCollisionBoneSnapAimData_H
#define FBGEN_AimAssistCollisionBoneSnapAimData_H

#include "AimAssistCollisionBonePrioritiesData.h"
struct AimAssistCollisionBoneSnapAimData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815D40;
	}
	float m_Bounding_LengthScale; // 0x0
	float m_Bounding_RadiusScale; // 0x4
	float m_Point_LengthScale; // 0x8
	AimAssistCollisionBonePrioritiesData m_Point_Priorities; // 0xc
	AimAssistCollisionBonePrioritiesData m_Point_Priorities_BoneUnderReticle; // 0x18
}; // size = 0x24

#endif // FBGEN_AimAssistCollisionBoneSnapAimData_H
