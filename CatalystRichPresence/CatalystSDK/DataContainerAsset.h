//
// Generated with FrostbiteGen by Chod
// File: SDK\DataContainerAsset.h
// Created: Wed Mar 10 19:07:19 2021
//

#ifndef FBGEN_DataContainerAsset_H
#define FBGEN_DataContainerAsset_H

#include "DataContainer.h"
#include "Asset.h"

class DataContainerAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E75B0;
	}
	DataContainer* m_Data; // 0x18
}; // size = 0x20

#endif // FBGEN_DataContainerAsset_H
