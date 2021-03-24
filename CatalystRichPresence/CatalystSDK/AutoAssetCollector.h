//
// Generated with FrostbiteGen by Chod
// File: SDK\AutoAssetCollector.h
// Created: Wed Mar 10 19:08:35 2021
//

#ifndef FBGEN_AutoAssetCollector_H
#define FBGEN_AutoAssetCollector_H

#include "Array.h"
#include "DataContainer.h"

class AutoAssetCollector :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA1A0;
	}
	Array<Asset*> m_Assets; // 0x10
	float m_AutoCollectMinimumUsagePercentage; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AutoAssetCollector_H
