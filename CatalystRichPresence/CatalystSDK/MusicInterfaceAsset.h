//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicInterfaceAsset.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicInterfaceAsset_H
#define FBGEN_MusicInterfaceAsset_H

#include "Array.h"
#include "Asset.h"

class MusicInterfaceAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7440;
	}
	Array<MusicEventData*> m_Events; // 0x18
	Array<MusicParameterData*> m_Parameters; // 0x20
}; // size = 0x28

#endif // FBGEN_MusicInterfaceAsset_H
