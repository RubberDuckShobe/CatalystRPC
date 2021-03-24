//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticModelNetworkInfo.h
// Created: Wed Mar 10 19:00:54 2021
//

#ifndef FBGEN_StaticModelNetworkInfo_H
#define FBGEN_StaticModelNetworkInfo_H

#include "Array.h"
struct StaticModelNetworkInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DA88;
	}
	Array<IndexRange> m_PartNetworkIdRanges; // 0x0
	unsigned int m_NetworkIdCount; // 0x8
	unsigned char _0xc[0x4];
	Array<ChildStaticModelNetworkInfo> m_ChildNetworkInfos; // 0x10
	unsigned int m_ChildNetworkIdCount; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_StaticModelNetworkInfo_H
