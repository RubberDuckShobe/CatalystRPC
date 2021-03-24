//
// Generated with FrostbiteGen by Chod
// File: SDK\SharedBundleReference.h
// Created: Wed Mar 10 19:01:27 2021
//

#ifndef FBGEN_SharedBundleReference_H
#define FBGEN_SharedBundleReference_H

#include "BundleHeapInfo.h"
struct SharedBundleReference
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E50B0;
	}
	const char* m_Name; // 0x0
	BundleHeapInfo m_Heap; // 0x8
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_SharedBundleReference_H
