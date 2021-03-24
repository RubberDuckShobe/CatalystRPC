//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundAsset.h
// Created: Wed Mar 10 19:01:19 2021
//

#ifndef FBGEN_SoundAsset_H
#define FBGEN_SoundAsset_H

#include "SoundScopeData.h"
#include "Array.h"
#include "QualityScalableFloat.h"
#include "Asset.h"

class SoundAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1370;
	}
	SoundScopeData* m_Scope; // 0x18
	Array<SoundDataReference> m_ReferencedData; // 0x20
	QualityScalableFloat m_EffectManagerCullDistance; // 0x28
}; // size = 0x38

#endif // FBGEN_SoundAsset_H
