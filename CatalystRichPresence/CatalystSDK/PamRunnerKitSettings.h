//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitSettings.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnerKitSettings_H
#define FBGEN_PamRunnerKitSettings_H

#include "PamRunnerKitDefinitionsMeta.h"
#include "PamLisenceRunnerKitGuidMappingAsset.h"
#include "SystemSettings.h"

class PamRunnerKitSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877EE0;
	}
	PamRunnerKitDefinitionsMeta* m_KitDefinitions; // 0x20
	PamLisenceRunnerKitGuidMappingAsset* m_RunnerKitMapping; // 0x28
}; // size = 0x30

#endif // FBGEN_PamRunnerKitSettings_H
