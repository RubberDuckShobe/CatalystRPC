//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundDataReference.h
// Created: Wed Mar 10 19:01:17 2021
//

#ifndef FBGEN_SoundDataReference_H
#define FBGEN_SoundDataReference_H

#include "DataContainer.h"
#include "SoundDataAsset.h"
struct SoundDataReference
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D05E8;
	}
	DataContainer* m_DataOwner; // 0x0
	SoundDataAsset* m_SoundData; // 0x8
}; // size = 0x10

#endif // FBGEN_SoundDataReference_H
