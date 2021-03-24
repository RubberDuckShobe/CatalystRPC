//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundMasterPatchAsset.h
// Created: Wed Mar 10 19:01:12 2021
//

#ifndef FBGEN_SoundMasterPatchAsset_H
#define FBGEN_SoundMasterPatchAsset_H

#include "SoundBusData.h"
#include "SoundBusPatchBaseAsset.h"

class SoundMasterPatchAsset :
	public SoundBusPatchBaseAsset // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1070;
	}
	SoundBusData* m_RwMovieBus; // 0x28
}; // size = 0x30

#endif // FBGEN_SoundMasterPatchAsset_H
