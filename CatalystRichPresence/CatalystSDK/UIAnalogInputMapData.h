//
// Generated with FrostbiteGen by Chod
// File: SDK\UIAnalogInputMapData.h
// Created: Wed Mar 10 19:00:02 2021
//

#ifndef FBGEN_UIAnalogInputMapData_H
#define FBGEN_UIAnalogInputMapData_H

#include "UIAnalogInput.h"
#include "InputConceptIdentifiers.h"
struct UIAnalogInputMapData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F818;
	}
	UIAnalogInput m_AnalogInput; // 0x0
	InputConceptIdentifiers m_XAxisConceptIdentifier; // 0x4
	InputConceptIdentifiers m_YAxisConceptIdentifier; // 0x8
	float m_OverrideDeadZone; // 0xc
}; // size = 0x10

#endif // FBGEN_UIAnalogInputMapData_H
