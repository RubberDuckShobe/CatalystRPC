//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEchoCustomizationListRow.h
// Created: Wed Mar 10 19:04:40 2021
//

#ifndef FBGEN_PamEchoCustomizationListRow_H
#define FBGEN_PamEchoCustomizationListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamEchoCustomizationListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889680;
	}
	unsigned int m_EchoNameHash; // 0x18
	unsigned char _0x1c[0x4];
	LocalizedString* m_Name; // 0x20
	LocalizedString* m_Description; // 0x28
	const char* m_TextureId; // 0x30
	int m_ListIndex; // 0x38
	bool m_IsActive; // 0x3c
	unsigned char _0x3d[0x3];
}; // size = 0x40

#endif // FBGEN_PamEchoCustomizationListRow_H
