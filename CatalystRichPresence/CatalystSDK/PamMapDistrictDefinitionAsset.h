//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictDefinitionAsset.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictDefinitionAsset_H
#define FBGEN_PamMapDistrictDefinitionAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamMapDistrictDefinitionAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880CB0;
	}
	Array<PamMapDistrictDescription*> m_Districts; // 0x18
}; // size = 0x20

#endif // FBGEN_PamMapDistrictDefinitionAsset_H
