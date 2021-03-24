//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEchoCustomizationDefinitionsMeta.h
// Created: Wed Mar 10 19:04:40 2021
//

#ifndef FBGEN_PamEchoCustomizationDefinitionsMeta_H
#define FBGEN_PamEchoCustomizationDefinitionsMeta_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamEchoCustomizationDefinitionsMeta :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878600;
	}
	Array<PamEchoCustomizationData> m_PamEchoCustomizations; // 0x18
}; // size = 0x20

#endif // FBGEN_PamEchoCustomizationDefinitionsMeta_H
