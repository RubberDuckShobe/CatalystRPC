//
// Generated with FrostbiteGen by Chod
// File: SDK\ChildStaticModelNetworkInfo.h
// Created: Wed Mar 10 19:08:13 2021
//

#ifndef FBGEN_ChildStaticModelNetworkInfo_H
#define FBGEN_ChildStaticModelNetworkInfo_H

#include "IndexRange.h"
struct ChildStaticModelNetworkInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DCE8;
	}
	IndexRange m_NetworkRange; // 0x0
	unsigned int m_ParentPartComponentIndex; // 0x8
	unsigned int m_ParentHealthStateIndex; // 0xc
	unsigned int m_InstanceIndex; // 0x10
}; // size = 0x14

#endif // FBGEN_ChildStaticModelNetworkInfo_H
