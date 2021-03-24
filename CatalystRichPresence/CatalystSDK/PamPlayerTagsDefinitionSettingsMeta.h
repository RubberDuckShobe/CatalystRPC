//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagsDefinitionSettingsMeta.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamPlayerTagsDefinitionSettingsMeta_H
#define FBGEN_PamPlayerTagsDefinitionSettingsMeta_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamPlayerTagsDefinitionSettingsMeta :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878360;
	}
	Array<PamPlayerTagLayerDataMeta> m_Layers; // 0x18
}; // size = 0x20

#endif // FBGEN_PamPlayerTagsDefinitionSettingsMeta_H
