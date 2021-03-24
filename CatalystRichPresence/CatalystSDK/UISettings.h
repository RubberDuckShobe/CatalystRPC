//
// Generated with FrostbiteGen by Chod
// File: SDK\UISettings.h
// Created: Wed Mar 10 18:59:48 2021
//

#ifndef FBGEN_UISettings_H
#define FBGEN_UISettings_H

#include "UISystemType.h"
#include "ProfileOptionsAsset.h"
#include "LanguageFormat.h"
#include "LocalizationAsset.h"
#include "UIImmediateModeFontConfigurationAsset.h"
#include "SystemSettings.h"

class UISettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281ECF0;
	}
	UISystemType m_System; // 0x20
	unsigned char _0x24[0x4];
	ProfileOptionsAsset* m_ProfileOptions; // 0x28
	LanguageFormat m_Language; // 0x30
	unsigned char _0x34[0x4];
	LocalizationAsset* m_Localization; // 0x38
	UIImmediateModeFontConfigurationAsset* m_FontConfiguration; // 0x40
	bool m_DrawEnable; // 0x48
	bool m_EnableJobs; // 0x49
	bool m_ScaleformSafeMode; // 0x4a
	bool m_UseXYUITranslationOffset; // 0x4b
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_UISettings_H
