//
// Generated with FrostbiteGen by Chod
// File: SDK\SettingsBundleAsset.h
// Created: Wed Mar 10 19:01:36 2021
//

#ifndef FBGEN_SettingsBundleAsset_H
#define FBGEN_SettingsBundleAsset_H

#include "Array.h"
#include "Asset.h"

class SettingsBundleAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B21C0;
	}
	Array<SystemSettings*> m_Settings; // 0x18
}; // size = 0x20

#endif // FBGEN_SettingsBundleAsset_H
