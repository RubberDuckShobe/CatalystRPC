//
// Generated with FrostbiteGen by Chod
// File: SDK\UIWidgetEntityData.h
// Created: Wed Mar 10 18:59:44 2021
//

#ifndef FBGEN_UIWidgetEntityData_H
#define FBGEN_UIWidgetEntityData_H

#include "UIElementSize.h"
#include "Array.h"
#include "EntityData.h"

class UIWidgetEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EF30;
	}
	UIElementSize m_Size; // 0x18
	Array<UIElementLayerEntityData*> m_Layers; // 0x20
	Array<UITextureMappingAsset*> m_TextureMappings; // 0x28
	Array<GameObjectData*> m_Components; // 0x30
	bool m_Visible; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_UIWidgetEntityData_H
