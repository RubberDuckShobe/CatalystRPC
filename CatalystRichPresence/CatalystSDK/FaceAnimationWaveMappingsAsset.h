//
// Generated with FrostbiteGen by Chod
// File: SDK\FaceAnimationWaveMappingsAsset.h
// Created: Wed Mar 10 19:06:50 2021
//

#ifndef FBGEN_FaceAnimationWaveMappingsAsset_H
#define FBGEN_FaceAnimationWaveMappingsAsset_H

#include "Array.h"
#include "Asset.h"

class FaceAnimationWaveMappingsAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BED0;
	}
	Array<FaceAnimationWaveMappings*> m_Mappings; // 0x18
}; // size = 0x20

#endif // FBGEN_FaceAnimationWaveMappingsAsset_H
