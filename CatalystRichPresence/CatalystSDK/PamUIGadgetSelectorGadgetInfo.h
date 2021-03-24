//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIGadgetSelectorGadgetInfo.h
// Created: Wed Mar 10 19:03:31 2021
//

#ifndef FBGEN_PamUIGadgetSelectorGadgetInfo_H
#define FBGEN_PamUIGadgetSelectorGadgetInfo_H

#include "PamUIGadgetSelectorAxis.h"
#include "Array.h"
struct PamUIGadgetSelectorGadgetInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888880;
	}
	PamUIGadgetSelectorAxis m_Axis; // 0x0
	unsigned int m_AxisIndex; // 0x4
	const char* m_IconTextureId; // 0x8
	const char* m_InteractSid; // 0x10
	const char* m_SecondaryInteractSid; // 0x18
	const char* m_DescriptionSid; // 0x20
	unsigned int m_CountPropertyId; // 0x28
	unsigned int m_EquippedPropertyId; // 0x2c
	unsigned int m_DisabledPropertyId; // 0x30
	unsigned int m_UnlockedPropertyId; // 0x34
	unsigned int m_EquippedEventId; // 0x38
	unsigned int m_CraftedEventId; // 0x3c
	unsigned int m_UsedEventId; // 0x40
	unsigned char _0x44[0x4];
	Array<PamUIGadgetSelectorCraftingComponentInfo> m_Components; // 0x48
	bool m_Craftable; // 0x50
	bool m_Consumable; // 0x51
	bool m_Usable; // 0x52
	bool m_Equipable; // 0x53
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_PamUIGadgetSelectorGadgetInfo_H
