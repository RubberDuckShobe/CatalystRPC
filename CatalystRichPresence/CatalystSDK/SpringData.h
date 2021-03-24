//
// Generated with FrostbiteGen by Chod
// File: SDK\SpringData.h
// Created: Wed Mar 10 19:01:00 2021
//

#ifndef FBGEN_SpringData_H
#define FBGEN_SpringData_H

struct SpringData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BD40;
	}
	float m_Length; // 0x0
	float m_Stiffness; // 0x4
	float m_Damping; // 0x8
	float m_ProgressiveStartRatio; // 0xc
	float m_ProgressiveExponent; // 0x10
	float m_VisualClipOffset; // 0x14
	float m_AttachOffsetY; // 0x18
	float m_DisabledStrenghModifier; // 0x1c
}; // size = 0x20

#endif // FBGEN_SpringData_H
