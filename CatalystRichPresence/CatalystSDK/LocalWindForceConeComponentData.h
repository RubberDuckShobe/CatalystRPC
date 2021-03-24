//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceConeComponentData.h
// Created: Wed Mar 10 19:06:10 2021
//

#ifndef FBGEN_LocalWindForceConeComponentData_H
#define FBGEN_LocalWindForceConeComponentData_H

#include "LocalWindForceComponentBaseData.h"

class LocalWindForceConeComponentData :
	public LocalWindForceComponentBaseData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EAB60;
	}
	float m_InnerRadius; // 0x90
	float m_OuterRadius; // 0x94
	float m_ConeInnerAngle; // 0x98
	float m_ConeOuterAngle; // 0x9c
}; // size = 0xa0

#endif // FBGEN_LocalWindForceConeComponentData_H
