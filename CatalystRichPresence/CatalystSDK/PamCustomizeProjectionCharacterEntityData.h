//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomizeProjectionCharacterEntityData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomizeProjectionCharacterEntityData_H
#define FBGEN_PamCustomizeProjectionCharacterEntityData_H

#include "PamEchoCustomizationDefinitionsMeta.h"
#include "CustomizeCharacterData.h"
#include "CustomizeBaseEntityData.h"

class PamCustomizeProjectionCharacterEntityData :
	public CustomizeBaseEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428786C0;
	}
	PamEchoCustomizationDefinitionsMeta* m_PamEchoCustomizationDefinition; // 0x20
	CustomizeCharacterData* m_DefaultCustomization; // 0x28
	int m_CustomizationHash; // 0x30
	bool m_TriggerOnPropertyChange; // 0x34
	unsigned char _0x35[0x3];
}; // size = 0x38

#endif // FBGEN_PamCustomizeProjectionCharacterEntityData_H
