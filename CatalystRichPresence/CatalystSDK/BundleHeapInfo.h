//
// Generated with FrostbiteGen by Chod
// File: SDK\BundleHeapInfo.h
// Created: Wed Mar 10 19:08:23 2021
//

#ifndef FBGEN_BundleHeapInfo_H
#define FBGEN_BundleHeapInfo_H

#include "BundleHeapType.h"
struct BundleHeapInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA078;
	}
	BundleHeapType m_HeapType; // 0x0
	unsigned int m_InitialSize; // 0x4
	bool m_AllowGrow; // 0x8
	unsigned char _0x9[0x3];
}; // size = 0xc

#endif // FBGEN_BundleHeapInfo_H
