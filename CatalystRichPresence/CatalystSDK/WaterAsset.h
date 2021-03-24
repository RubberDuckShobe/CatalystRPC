//
// Generated with FrostbiteGen by Chod
// File: SDK\WaterAsset.h
// Created: Wed Mar 10 18:58:54 2021
//

#ifndef FBGEN_WaterAsset_H
#define FBGEN_WaterAsset_H

#include "ResourceRef.h"
#include "Asset.h"

class WaterAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A750;
	}
	ResourceRef m_PhysicsResource; // 0x18
}; // size = 0x20

#endif // FBGEN_WaterAsset_H
