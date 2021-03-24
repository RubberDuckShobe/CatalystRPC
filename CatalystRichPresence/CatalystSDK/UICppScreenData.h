//
// Generated with FrostbiteGen by Chod
// File: SDK\UICppScreenData.h
// Created: Wed Mar 10 19:00:00 2021
//

#ifndef FBGEN_UICppScreenData_H
#define FBGEN_UICppScreenData_H

#include "Asset.h"

class UICppScreenData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281ED50;
	}
	float m_FieldOfView; // 0x18
	float m_ScreenLayoutWidth; // 0x1c
	float m_ScreenLayoutHeight; // 0x20
	bool m_ScaleUpAndKeepAspectRatio; // 0x24
	bool m_FlashCompatibilityMode; // 0x25
	bool m_EatAllInput; // 0x26
	bool m_LayoutWithSafeZone; // 0x27
}; // size = 0x28

#endif // FBGEN_UICppScreenData_H
