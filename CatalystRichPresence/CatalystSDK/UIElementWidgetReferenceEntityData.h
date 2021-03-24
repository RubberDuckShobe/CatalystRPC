//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementWidgetReferenceEntityData.h
// Created: Wed Mar 10 18:59:56 2021
//

#ifndef FBGEN_UIElementWidgetReferenceEntityData_H
#define FBGEN_UIElementWidgetReferenceEntityData_H

#include "UIElementTransform.h"
#include "Vec3.h"
#include "UIElementInclusionSettings.h"
#include "Vec2.h"
#include "UILayoutMode.h"
#include "UIElementAnchor.h"
#include "UIElementOffset.h"
#include "UIElementRectExpansion.h"
#include "LogicReferenceObjectData.h"

class UIElementWidgetReferenceEntityData :
	public LogicReferenceObjectData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EE70;
	}
	UIElementTransform m_UIElementTransform; // 0xa0
	Vec3 m_Color; // 0xd0
	const char* m_InstanceName; // 0xe0
	unsigned int m_InstanceNameHash; // 0xe8
	unsigned char _0xec[0x4];
	UIElementInclusionSettings m_InclusionSettings; // 0xf0
	Vec2 m_Size; // 0x100
	UILayoutMode m_LayoutMode; // 0x108
	UIElementOffset m_Offset; // 0x10c
	UIElementAnchor m_Anchor; // 0x114
	UIElementOffset m_Position; // 0x11c
	UIElementRectExpansion m_Expansion; // 0x124
	float m_Alpha; // 0x134
	const char* m_CodeAccessIdentifier; // 0x138
	bool m_UseElementSize; // 0x140
	unsigned char _0x141[0xf];
}; // size = 0x150

#endif // FBGEN_UIElementWidgetReferenceEntityData_H
