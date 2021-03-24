//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementEntityData.h
// Created: Wed Mar 10 18:59:59 2021
//

#ifndef FBGEN_UIElementEntityData_H
#define FBGEN_UIElementEntityData_H

#include "UIElementTransform.h"
#include "Vec3.h"
#include "LinearTransform.h"
#include "Vec2.h"
#include "UILayoutMode.h"
#include "UIElementAnchor.h"
#include "UIElementOffset.h"
#include "UIElementRectExpansion.h"
#include "EntityData.h"

class UIElementEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EED0;
	}
	const char* m_InstanceName; // 0x18
	UIElementTransform m_UIElementTransform; // 0x20
	Vec3 m_Color; // 0x50
	LinearTransform m_Transform; // 0x60
	unsigned int m_InstanceNameHash; // 0xa0
	Vec2 m_Size; // 0xa4
	UILayoutMode m_LayoutMode; // 0xac
	UIElementOffset m_Offset; // 0xb0
	UIElementAnchor m_Anchor; // 0xb8
	UIElementOffset m_Position; // 0xc0
	UIElementRectExpansion m_Expansion; // 0xc8
	float m_Alpha; // 0xd8
	bool m_Visible; // 0xdc
	unsigned char _0xdd[0x3];
}; // size = 0xe0

#endif // FBGEN_UIElementEntityData_H
