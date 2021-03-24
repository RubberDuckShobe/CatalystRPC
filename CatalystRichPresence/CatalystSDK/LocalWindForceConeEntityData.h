//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalWindForceConeEntityData.h
// Created: Wed Mar 10 19:06:10 2021
//

#ifndef FBGEN_LocalWindForceConeEntityData_H
#define FBGEN_LocalWindForceConeEntityData_H

#include "LocalWindForceEntityBaseData.h"

class LocalWindForceConeEntityData :
	public LocalWindForceEntityBaseData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EABC0;
	}
	float m_InnerRadius; // 0x80
	float m_OuterRadius; // 0x84
	float m_ConeInnerAngle; // 0x88
	float m_ConeOuterAngle; // 0x8c
}; // size = 0x90

#endif // FBGEN_LocalWindForceConeEntityData_H
