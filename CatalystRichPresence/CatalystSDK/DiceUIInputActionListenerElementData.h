//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIInputActionListenerElementData.h
// Created: Wed Mar 10 19:07:12 2021
//

#ifndef FBGEN_DiceUIInputActionListenerElementData_H
#define FBGEN_DiceUIInputActionListenerElementData_H

#include "UIInputAction.h"
#include "UIElementEntityData.h"

class DiceUIInputActionListenerElementData :
	public UIElementEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF730;
	}
	UIInputAction m_InputAction; // 0xe0
	bool m_ConsumeInput; // 0xe4
	unsigned char _0xe5[0xb];
}; // size = 0xf0

#endif // FBGEN_DiceUIInputActionListenerElementData_H
