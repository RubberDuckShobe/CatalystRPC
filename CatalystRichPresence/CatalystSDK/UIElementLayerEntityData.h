//
// Generated with FrostbiteGen by Chod
// File: SDK\UIElementLayerEntityData.h
// Created: Wed Mar 10 18:59:58 2021
//

#ifndef FBGEN_UIElementLayerEntityData_H
#define FBGEN_UIElementLayerEntityData_H

#include "Array.h"
#include "UIElementInclusionSettings.h"
#include "EntityData.h"

class UIElementLayerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EF90;
	}
	const char* m_LayerName; // 0x18
	Array<GameObjectData*> m_Elements; // 0x20
	UIElementInclusionSettings m_InclusionSettings; // 0x28
	bool m_Visible; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_UIElementLayerEntityData_H
