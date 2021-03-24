//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicBaseAsset.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MusicBaseAsset_H
#define FBGEN_MusicBaseAsset_H

#include "MusicInterfaceAsset.h"
#include "Asset.h"

class MusicBaseAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C72C0;
	}
	MusicInterfaceAsset* m_Interface; // 0x18
	unsigned int m_MaxOverlayCount; // 0x20
	unsigned char m_ChannelCount; // 0x24
	unsigned char m_OverlayChannelCount; // 0x25
	unsigned char _0x26[0x2];
}; // size = 0x28

#endif // FBGEN_MusicBaseAsset_H
