//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIMouseInputListenerElementData.h
// Created: Wed Mar 10 19:07:11 2021
//

#ifndef FBGEN_DiceUIMouseInputListenerElementData_H
#define FBGEN_DiceUIMouseInputListenerElementData_H

#include "UIMouseButton.h"
#include "UIElementEntityData.h"

class DiceUIMouseInputListenerElementData :
	public UIElementEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF6D0;
	}
	UIMouseButton m_MouseButton; // 0xe0
	bool m_ConsumeInput; // 0xe4
	bool m_FullScreen; // 0xe5
	unsigned char _0xe6[0xa];
}; // size = 0xf0

#endif // FBGEN_DiceUIMouseInputListenerElementData_H
