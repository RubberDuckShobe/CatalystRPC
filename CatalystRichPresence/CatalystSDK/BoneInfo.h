//
// Generated with FrostbiteGen by Chod
// File: SDK\BoneInfo.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoneInfo_H
#define FBGEN_BoneInfo_H

#include "LinearTransform.h"
struct BoneInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816160;
	}
	LinearTransform m_Transform; // 0x0
	int m_BoneIndex; // 0x40
	unsigned int m_BoneNameHash; // 0x44
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_BoneInfo_H
