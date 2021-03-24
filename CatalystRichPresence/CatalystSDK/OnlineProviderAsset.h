//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineProviderAsset.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineProviderAsset_H
#define FBGEN_OnlineProviderAsset_H

#include "Array.h"
#include "Asset.h"

class OnlineProviderAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E3D0;
	}
	Array<OnlineProviderConfiguration> m_Configurations; // 0x18
}; // size = 0x20

#endif // FBGEN_OnlineProviderAsset_H
