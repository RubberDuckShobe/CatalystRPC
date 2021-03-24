//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLisenceRunnerKitGuidMappingAsset.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLisenceRunnerKitGuidMappingAsset_H
#define FBGEN_PamLisenceRunnerKitGuidMappingAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamLisenceRunnerKitGuidMappingAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877F40;
	}
	Array<PamRunnerKitGuidLicenseMapping> m_PamRunnerKitGuidLicenseMapping; // 0x18
}; // size = 0x20

#endif // FBGEN_PamLisenceRunnerKitGuidMappingAsset_H
