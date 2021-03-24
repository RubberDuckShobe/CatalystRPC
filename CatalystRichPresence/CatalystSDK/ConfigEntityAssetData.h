//
// Generated with FrostbiteGen by Chod
// File: SDK\ConfigEntityAssetData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConfigEntityAssetData_H
#define FBGEN_ConfigEntityAssetData_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class ConfigEntityAssetData :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142899E60;
	}
	Array<ConfigListAsset*> m_DataLists; // 0x18
}; // size = 0x20

#endif // FBGEN_ConfigEntityAssetData_H
