//
// Generated with FrostbiteGen by Chod
// File: SDK\UIInputActionMapData.h
// Created: Wed Mar 10 18:59:54 2021
//

#ifndef FBGEN_UIInputActionMapData_H
#define FBGEN_UIInputActionMapData_H

#include "UIInputAction.h"
#include "InputConceptIdentifiers.h"
struct UIInputActionMapData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F838;
	}
	UIInputAction m_InputAction; // 0x0
	InputConceptIdentifiers m_ConceptIdentifier; // 0x4
	float m_OverrideRepeatDelaySec; // 0x8
	float m_OverrideRepeatSpeedSec; // 0xc
	bool m_AllowRepeat; // 0x10
	unsigned char _0x11[0x3];
}; // size = 0x14

#endif // FBGEN_UIInputActionMapData_H
