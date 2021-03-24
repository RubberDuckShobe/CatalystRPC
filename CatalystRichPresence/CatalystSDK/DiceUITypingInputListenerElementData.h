//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUITypingInputListenerElementData.h
// Created: Wed Mar 10 19:07:11 2021
//

#ifndef FBGEN_DiceUITypingInputListenerElementData_H
#define FBGEN_DiceUITypingInputListenerElementData_H

#include "UIElementEntityData.h"

class DiceUITypingInputListenerElementData :
	public UIElementEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF670;
	}
	unsigned int m_MaxTextLength; // 0xe0
	unsigned char _0xe4[0x4];
	const char* m_DefaultText; // 0xe8
	const char* m_Title; // 0xf0
	const char* m_Description; // 0xf8
	bool m_AllowMultiline; // 0x100
	bool m_AbortOnEscape; // 0x101
	unsigned char _0x102[0xe];
}; // size = 0x110

#endif // FBGEN_DiceUITypingInputListenerElementData_H
