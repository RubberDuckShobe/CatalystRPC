//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementAnalogStickInputListenerEntityData.h
// Created: Wed Mar 10 19:03:37 2021
//

#ifndef FBGEN_PamUIElementAnalogStickInputListenerEntityData_H
#define FBGEN_PamUIElementAnalogStickInputListenerEntityData_H

#include "LocalizedString.h"
#include "DiceUIAnalogStickInputListenerElementData.h"

class PamUIElementAnalogStickInputListenerEntityData :
	public DiceUIAnalogStickInputListenerElementData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888F00;
	}
	const char* m_DescriptionSid; // 0xf0
	LocalizedString* m_Description; // 0xf8
	bool m_DescriptionVisible; // 0x100
	bool m_Disable; // 0x101
	unsigned char _0x102[0xe];
}; // size = 0x110

#endif // FBGEN_PamUIElementAnalogStickInputListenerEntityData_H
