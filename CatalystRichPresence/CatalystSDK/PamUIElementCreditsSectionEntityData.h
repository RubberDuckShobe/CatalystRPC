//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementCreditsSectionEntityData.h
// Created: Wed Mar 10 19:03:36 2021
//

#ifndef FBGEN_PamUIElementCreditsSectionEntityData_H
#define FBGEN_PamUIElementCreditsSectionEntityData_H

#include "CreditsDataAsset.h"
#include "UIWidgetBlueprint.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementCreditsSectionEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888960;
	}
	int m_SectionIndex; // 0x110
	unsigned char _0x114[0x4];
	CreditsDataAsset* m_Credits; // 0x118
	float m_HeaderMarginBottom; // 0x120
	float m_TitleMarginBottom; // 0x124
	float m_LicenseMarginBottom; // 0x128
	float m_LogoMarginBottom; // 0x12c
	float m_LeadPersonMarginBottom; // 0x130
	float m_PersonsMarginBottom; // 0x134
	float m_ColumnizedPersonsMarginBottom; // 0x138
	float m_PersonWithSubtitleMarginBottom; // 0x13c
	UIWidgetBlueprint* m_HeaderBlueprint; // 0x140
	UIWidgetBlueprint* m_TitleBlueprint; // 0x148
	UIWidgetBlueprint* m_LicenseBlueprint; // 0x150
	UIWidgetBlueprint* m_LogoBlueprint; // 0x158
	UIWidgetBlueprint* m_LeadPersonBlueprint; // 0x160
	UIWidgetBlueprint* m_PersonsBlueprint; // 0x168
	UIWidgetBlueprint* m_ColumnizedPersonsHeaderBlueprint; // 0x170
	UIWidgetBlueprint* m_ColumnizedPersonsBlueprint; // 0x178
	UIWidgetBlueprint* m_PersonWithSubtitleBlueprint; // 0x180
	unsigned char _0x188[0x8];
}; // size = 0x190

#endif // FBGEN_PamUIElementCreditsSectionEntityData_H
