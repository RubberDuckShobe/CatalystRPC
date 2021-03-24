//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitLicenseMapAsset.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRunnerKitLicenseMapAsset_H
#define FBGEN_PamRunnerKitLicenseMapAsset_H

#include "GamePlatform.h"
#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamRunnerKitLicenseMapAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877FA0;
	}
	GamePlatform m_Platform; // 0x18
	unsigned char _0x1c[0x4];
	Array<PamRunnerKitLicenseMapping> m_Mappings; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRunnerKitLicenseMapAsset_H
