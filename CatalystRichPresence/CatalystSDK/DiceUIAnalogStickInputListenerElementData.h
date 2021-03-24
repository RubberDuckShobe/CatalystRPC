//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIAnalogStickInputListenerElementData.h
// Created: Wed Mar 10 19:07:12 2021
//

#ifndef FBGEN_DiceUIAnalogStickInputListenerElementData_H
#define FBGEN_DiceUIAnalogStickInputListenerElementData_H

#include "DiceUIAnalogStick.h"
#include "UIElementEntityData.h"

class DiceUIAnalogStickInputListenerElementData :
	public UIElementEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF7F0;
	}
	DiceUIAnalogStick m_AnalogStick; // 0xe0
	float m_TriggerThreshold; // 0xe4
	float m_DeadZone; // 0xe8
	bool m_ConsumeInput; // 0xec
	bool m_FlipYAxis; // 0xed
	unsigned char _0xee[0x2];
}; // size = 0xf0

#endif // FBGEN_DiceUIAnalogStickInputListenerElementData_H
