//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterCustomizationAsset.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterCustomizationAsset_H
#define FBGEN_CharacterCustomizationAsset_H

#include "UIHudIcon.h"
#include "CustomizationTable.h"
#include "Array.h"
#include "DataContainerPolicyAsset.h"

class CharacterCustomizationAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F9C0;
	}
	UIHudIcon m_UIHudIcon; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_UIKitIconName; // 0x20
	const char* m_LabelSid; // 0x28
	CustomizationTable* m_VisualTable; // 0x30
	CustomizationTable* m_SpecializationTable; // 0x38
	Array<VoiceOverLabel*> m_VoiceOverLabels; // 0x40
}; // size = 0x48

#endif // FBGEN_CharacterCustomizationAsset_H
