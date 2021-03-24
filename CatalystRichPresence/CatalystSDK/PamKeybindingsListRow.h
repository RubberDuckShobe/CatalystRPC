//
// Generated with FrostbiteGen by Chod
// File: SDK\PamKeybindingsListRow.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamKeybindingsListRow_H
#define FBGEN_PamKeybindingsListRow_H

#include "LocalizedString.h"
#include "PamListRow.h"

class PamKeybindingsListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AB20;
	}
	LocalizedString* m_LocalizedName; // 0x18
	LocalizedString* m_LocalizedBinding1; // 0x20
	LocalizedString* m_LocalizedBinding2; // 0x28
	const char* m_Name; // 0x30
	const char* m_Binding1; // 0x38
	const char* m_Binding2; // 0x40
	int m_ConceptIndex; // 0x48
	int m_UnicodeBinding1; // 0x4c
	int m_UnicodeBinding2; // 0x50
	bool m_Negated; // 0x54
	bool m_Unassigned; // 0x55
	unsigned char _0x56[0x2];
}; // size = 0x58

#endif // FBGEN_PamKeybindingsListRow_H
