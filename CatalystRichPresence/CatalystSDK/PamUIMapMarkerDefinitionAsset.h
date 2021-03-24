//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapMarkerDefinitionAsset.h
// Created: Wed Mar 10 19:03:27 2021
//

#ifndef FBGEN_PamUIMapMarkerDefinitionAsset_H
#define FBGEN_PamUIMapMarkerDefinitionAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamUIMapMarkerDefinitionAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880FB0;
	}
	Array<PamUIMapMarkerDefinition*> m_Definitions; // 0x18
}; // size = 0x20

#endif // FBGEN_PamUIMapMarkerDefinitionAsset_H
