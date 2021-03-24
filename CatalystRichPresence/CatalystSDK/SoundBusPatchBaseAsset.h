//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundBusPatchBaseAsset.h
// Created: Wed Mar 10 19:01:18 2021
//

#ifndef FBGEN_SoundBusPatchBaseAsset_H
#define FBGEN_SoundBusPatchBaseAsset_H

#include "SoundGraphData.h"
#include "Array.h"
#include "Asset.h"

class SoundBusPatchBaseAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D10D0;
	}
	SoundGraphData* m_Graph; // 0x18
	Array<SoundBusData*> m_Busses; // 0x20
}; // size = 0x28

#endif // FBGEN_SoundBusPatchBaseAsset_H
