//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapSettingsAsset.h
// Created: Wed Mar 10 19:03:27 2021
//

#ifndef FBGEN_PamUIMapSettingsAsset_H
#define FBGEN_PamUIMapSettingsAsset_H

#include "PamUIMapMarkerDefinitionAsset.h"
#include "Asset.h"

class PamUIMapSettingsAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878AE0;
	}
	PamUIMapMarkerDefinitionAsset* m_MapMarkerDefinitions; // 0x18
}; // size = 0x20

#endif // FBGEN_PamUIMapSettingsAsset_H
