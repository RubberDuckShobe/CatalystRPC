//
// Generated with FrostbiteGen by Chod
// File: SDK\ShadowExtrusionAsset.h
// Created: Wed Mar 10 19:01:28 2021
//

#ifndef FBGEN_ShadowExtrusionAsset_H
#define FBGEN_ShadowExtrusionAsset_H

#include "ShadowExtrusionObjectData.h"
#include "Asset.h"

class ShadowExtrusionAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142892570;
	}
	ShadowExtrusionObjectData* m_ExtrusionData; // 0x18
}; // size = 0x20

#endif // FBGEN_ShadowExtrusionAsset_H
