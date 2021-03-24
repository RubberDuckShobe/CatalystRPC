//
// Generated with FrostbiteGen by Chod
// File: SDK\BigWorldSettingsAsset.h
// Created: Wed Mar 10 19:08:30 2021
//

#ifndef FBGEN_BigWorldSettingsAsset_H
#define FBGEN_BigWorldSettingsAsset_H

#include "Array.h"
#include "Asset.h"

class BigWorldSettingsAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280BF90;
	}
	Array<BigWorldSetting*> m_Settings; // 0x18
}; // size = 0x20

#endif // FBGEN_BigWorldSettingsAsset_H
