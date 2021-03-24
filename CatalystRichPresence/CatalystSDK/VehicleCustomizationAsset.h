//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleCustomizationAsset.h
// Created: Wed Mar 10 18:59:21 2021
//

#ifndef FBGEN_VehicleCustomizationAsset_H
#define FBGEN_VehicleCustomizationAsset_H

#include "CustomizationTable.h"
#include "DataContainerPolicyAsset.h"

class VehicleCustomizationAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428116A0;
	}
	CustomizationTable* m_Customization; // 0x18
}; // size = 0x20

#endif // FBGEN_VehicleCustomizationAsset_H
