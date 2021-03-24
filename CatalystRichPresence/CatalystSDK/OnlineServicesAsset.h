//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineServicesAsset.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineServicesAsset_H
#define FBGEN_OnlineServicesAsset_H

#include "Array.h"
#include "Asset.h"

class OnlineServicesAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DE90;
	}
	Array<PresenceServiceData*> m_OnlineServices; // 0x18
}; // size = 0x20

#endif // FBGEN_OnlineServicesAsset_H
