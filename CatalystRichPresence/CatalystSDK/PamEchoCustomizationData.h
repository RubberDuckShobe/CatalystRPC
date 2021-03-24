//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEchoCustomizationData.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamEchoCustomizationData_H
#define FBGEN_PamEchoCustomizationData_H

#include "CustomizeCharacterData.h"
struct PamEchoCustomizationData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428778E0;
	}
	const char* m_NameSid; // 0x0
	const char* m_DescriptionSid; // 0x8
	const char* m_TextureId; // 0x10
	CustomizeCharacterData* m_CustomizationData; // 0x18
	unsigned int m_CustomizationHash; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamEchoCustomizationData_H
