//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagLocationPolicyInfo.h
// Created: Wed Mar 10 19:04:11 2021
//

#ifndef FBGEN_PamProgressionFlagLocationPolicyInfo_H
#define FBGEN_PamProgressionFlagLocationPolicyInfo_H

#include "LinearTransform.h"
#include "Guid.h"
struct PamProgressionFlagLocationPolicyInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872720;
	}
	LinearTransform m_Transform; // 0x0
	unsigned int m_FlagNameHash; // 0x40
	Guid m_FlagGroupGuid; // 0x44
	unsigned char _0x54[0xc];
}; // size = 0x60

#endif // FBGEN_PamProgressionFlagLocationPolicyInfo_H
