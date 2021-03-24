//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagInfoList.h
// Created: Wed Mar 10 19:04:11 2021
//

#ifndef FBGEN_PamProgressionFlagInfoList_H
#define FBGEN_PamProgressionFlagInfoList_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamProgressionFlagInfoList :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873780;
	}
	Array<PamProgressionFlagInfo*> m_FlagInfos; // 0x18
}; // size = 0x20

#endif // FBGEN_PamProgressionFlagInfoList_H
