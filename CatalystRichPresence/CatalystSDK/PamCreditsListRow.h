//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCreditsListRow.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCreditsListRow_H
#define FBGEN_PamCreditsListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamCreditsListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A9A0;
	}
	LocalizedString* m_Description; // 0x18
	LocalizedString* m_Subtitle; // 0x20
	LocalizedString* m_PersonLeft; // 0x28
	LocalizedString* m_PersonRight; // 0x30
	float m_MarginBottom; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_PamCreditsListRow_H
