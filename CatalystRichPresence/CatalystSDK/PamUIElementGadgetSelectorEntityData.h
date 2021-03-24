//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementGadgetSelectorEntityData.h
// Created: Wed Mar 10 19:03:35 2021
//

#ifndef FBGEN_PamUIElementGadgetSelectorEntityData_H
#define FBGEN_PamUIElementGadgetSelectorEntityData_H

#include "Vec3.h"
#include "Array.h"
#include "UIElementFontStyle.h"
#include "Vec2.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementGadgetSelectorEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889200;
	}
	Vec3 m_CountBoxColor; // 0x110
	Vec3 m_ComponentCountBoxColor; // 0x120
	Vec3 m_IconColor; // 0x130
	Vec3 m_MarkedIconColor; // 0x140
	Vec3 m_MarkedIconBorderColor; // 0x150
	Array<PamUIGadgetSelectorGadgetInfo> m_Gadgets; // 0x160
	Vec2 m_IconSize; // 0x168
	UIElementFontStyle* m_CountBoxFontStyle; // 0x170
	Vec2 m_CountBoxSize; // 0x178
	Vec2 m_CountBoxOffset; // 0x180
	Vec2 m_CountBoxTextOffset; // 0x188
	UIElementFontStyle* m_ComponentCountBoxFontStyle; // 0x190
	Vec2 m_ComponentCountBoxSize; // 0x198
	Vec2 m_ComponentCountBoxOffset; // 0x1a0
	Vec2 m_ComponentCountBoxTextOffset; // 0x1a8
	Vec2 m_ComponentCountBoxSpacing; // 0x1b0
	float m_IconSpacing; // 0x1b8
	float m_MarkedIconBorderWidth; // 0x1bc
}; // size = 0x1c0

#endif // FBGEN_PamUIElementGadgetSelectorEntityData_H
