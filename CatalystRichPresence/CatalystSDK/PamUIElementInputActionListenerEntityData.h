//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementInputActionListenerEntityData.h
// Created: Wed Mar 10 19:03:34 2021
//

#ifndef FBGEN_PamUIElementInputActionListenerEntityData_H
#define FBGEN_PamUIElementInputActionListenerEntityData_H

#include "LocalizedString.h"
#include "DiceUIInputActionListenerElementData.h"

class PamUIElementInputActionListenerEntityData :
	public DiceUIInputActionListenerElementData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888FC0;
	}
	const char* m_DescriptionSid; // 0xf0
	LocalizedString* m_Description; // 0xf8
	float m_RepeatInterval; // 0x100
	float m_RepeatStartDelay; // 0x104
	bool m_DescriptionVisible; // 0x108
	bool m_Disable; // 0x109
	unsigned char _0x10a[0x6];
}; // size = 0x110

#endif // FBGEN_PamUIElementInputActionListenerEntityData_H
