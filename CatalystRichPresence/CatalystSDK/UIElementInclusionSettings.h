//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementInclusionSettings.h
// Created: Wed Mar 10 18:59:58 2021
//

#ifndef FBGEN_UIElementInclusionSettings_H
#define FBGEN_UIElementInclusionSettings_H

#include "Array.h"
struct UIElementInclusionSettings
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281D8E8;
	}
	Array<const char*> m_CustomInclusionCritera; // 0x0
	bool m_IsSingleplayerLayer; // 0x8
	bool m_IsMultiplayerLayer; // 0x9
	bool m_IsSDLayer; // 0xa
	bool m_IsHDLayer; // 0xb
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_UIElementInclusionSettings_H
