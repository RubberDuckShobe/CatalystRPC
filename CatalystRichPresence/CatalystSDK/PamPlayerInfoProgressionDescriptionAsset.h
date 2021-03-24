//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerInfoProgressionDescriptionAsset.h
// Created: Wed Mar 10 19:04:15 2021
//

#ifndef FBGEN_PamPlayerInfoProgressionDescriptionAsset_H
#define FBGEN_PamPlayerInfoProgressionDescriptionAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamPlayerInfoProgressionDescriptionAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877B20;
	}
	Array<PamPlayerInfoProgressionCategory> m_Categories; // 0x18
}; // size = 0x20

#endif // FBGEN_PamPlayerInfoProgressionDescriptionAsset_H
