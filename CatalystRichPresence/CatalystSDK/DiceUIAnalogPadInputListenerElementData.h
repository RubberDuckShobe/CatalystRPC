//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIAnalogPadInputListenerElementData.h
// Created: Wed Mar 10 19:07:12 2021
//

#ifndef FBGEN_DiceUIAnalogPadInputListenerElementData_H
#define FBGEN_DiceUIAnalogPadInputListenerElementData_H

#include "DiceUIAnalogPadType.h"
#include "UIElementEntityData.h"

class DiceUIAnalogPadInputListenerElementData :
	public UIElementEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF850;
	}
	DiceUIAnalogPadType m_AnalogPadType; // 0xe0
	bool m_ConsumeInput; // 0xe4
	unsigned char _0xe5[0xb];
}; // size = 0xf0

#endif // FBGEN_DiceUIAnalogPadInputListenerElementData_H
