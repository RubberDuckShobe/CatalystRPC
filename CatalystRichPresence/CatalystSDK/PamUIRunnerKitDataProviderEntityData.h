//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIRunnerKitDataProviderEntityData.h
// Created: Wed Mar 10 19:03:24 2021
//

#ifndef FBGEN_PamUIRunnerKitDataProviderEntityData_H
#define FBGEN_PamUIRunnerKitDataProviderEntityData_H

#include "PamPlayerTagsDefinitionAsset.h"
#include "PamEchoCustomizationDefinitionsMeta.h"
#include "PamClientUIListWidgetDataProviderEntityData.h"

class PamUIRunnerKitDataProviderEntityData :
	public PamClientUIListWidgetDataProviderEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428895C0;
	}
	PamPlayerTagsDefinitionAsset* m_PlayerTagDefinitionsAsset; // 0x20
	PamEchoCustomizationDefinitionsMeta* m_EchoCustomizationDefinitionsAsset; // 0x28
}; // size = 0x30

#endif // FBGEN_PamUIRunnerKitDataProviderEntityData_H
