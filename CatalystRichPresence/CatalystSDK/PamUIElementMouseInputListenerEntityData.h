//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementMouseInputListenerEntityData.h
// Created: Wed Mar 10 19:03:34 2021
//

#ifndef FBGEN_PamUIElementMouseInputListenerEntityData_H
#define FBGEN_PamUIElementMouseInputListenerEntityData_H

#include "UIMouseButton.h"
#include "LocalizedString.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementMouseInputListenerEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888EA0;
	}
	UIMouseButton m_MouseButton; // 0x110
	unsigned char _0x114[0x4];
	LocalizedString* m_ClickDescription; // 0x118
	LocalizedString* m_DoubleClickDescription; // 0x120
	bool m_ConsumeInput; // 0x128
	bool m_ClickDescriptionVisible; // 0x129
	bool m_DoubleClickDescriptionVisible; // 0x12a
	bool m_ClickDisable; // 0x12b
	bool m_DoubleClickDisable; // 0x12c
	unsigned char _0x12d[0x3];
}; // size = 0x130

#endif // FBGEN_PamUIElementMouseInputListenerEntityData_H
