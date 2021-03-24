//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionsAsset.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionsAsset_H
#define FBGEN_ProfileOptionsAsset_H

#include "Array.h"
#include "Asset.h"

class ProfileOptionsAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809950;
	}
	const char* m_FileName; // 0x18
	const char* m_ContentName; // 0x20
	unsigned int m_FileSize; // 0x28
	unsigned char _0x2c[0x4];
	Array<ProfileOptionData*> m_Options; // 0x30
	Array<ProfileOptionData*> m_OptionsPs3; // 0x38
	Array<ProfileOptionData*> m_OptionsXenon; // 0x40
	Array<ProfileOptionData*> m_OptionsGen4a; // 0x48
	Array<ProfileOptionData*> m_OptionsGen4b; // 0x50
	Array<ProfileOptionData*> m_OptionsWin; // 0x58
	bool m_AutoSaveOnQuit; // 0x60
	unsigned char _0x61[0x7];
}; // size = 0x68

#endif // FBGEN_ProfileOptionsAsset_H
