//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundBusPatchAsset.h
// Created: Wed Mar 10 19:01:18 2021
//

#ifndef FBGEN_SoundBusPatchAsset_H
#define FBGEN_SoundBusPatchAsset_H

#include "Array.h"
#include "SoundBusPatchBaseAsset.h"

class SoundBusPatchAsset :
	public SoundBusPatchBaseAsset // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1010;
	}
	Array<AudioGraphNodeData*> m_OutputNodes; // 0x28
}; // size = 0x30

#endif // FBGEN_SoundBusPatchAsset_H
