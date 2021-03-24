//
// Generated with FrostbiteGen by Chod
// File: SDK\CreditsSection.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_CreditsSection_H
#define FBGEN_CreditsSection_H

#include "CreditsSectionType.h"
#include "Array.h"
struct CreditsSection
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428888C0;
	}
	CreditsSectionType m_SectionType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_Description; // 0x8
	const char* m_Subtitle; // 0x10
	Array<const char*> m_PersonNames; // 0x18
}; // size = 0x20

#endif // FBGEN_CreditsSection_H
