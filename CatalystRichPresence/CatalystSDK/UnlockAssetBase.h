//
// Generated with FrostbiteGen by Chod
// File: SDK\UnlockAssetBase.h
// Created: Wed Mar 10 18:59:43 2021
//

#ifndef FBGEN_UnlockAssetBase_H
#define FBGEN_UnlockAssetBase_H

#include "UnlockUserDataBase.h"
#include "UnlockAssetBase.h"
#include "UnlockAvailability.h"
#include "DataContainerPolicyAsset.h"

class UnlockAssetBase :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281EC30;
	}
	UnlockUserDataBase* m_UnlockUserData; // 0x18
	const char* m_DebugUnlockId; // 0x20
	unsigned int m_Identifier; // 0x28
	unsigned int m_UnlockScore; // 0x2c
	unsigned int m_SubCategoryIdentifier; // 0x30
	unsigned char _0x34[0x4];
	UnlockAssetBase* m_NextLevelUnlockAsset; // 0x38
	UnlockAvailability m_AvailableForPlayer; // 0x40
	bool m_AutoAvailable; // 0x44
	bool m_HiddenInProgression; // 0x45
	unsigned char _0x46[0x2];
}; // size = 0x48

#endif // FBGEN_UnlockAssetBase_H
