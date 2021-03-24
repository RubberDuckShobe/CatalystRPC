//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRVNavObjectContainerAsset.h
// Created: Wed Mar 10 19:04:08 2021
//

#ifndef FBGEN_PamRVNavObjectContainerAsset_H
#define FBGEN_PamRVNavObjectContainerAsset_H

#include "Array.h"
#include "Asset.h"

class PamRVNavObjectContainerAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873EA0;
	}
	Array<PamRVNavObject*> m_ActiveRunnersVisionObjects; // 0x18
}; // size = 0x20

#endif // FBGEN_PamRVNavObjectContainerAsset_H
