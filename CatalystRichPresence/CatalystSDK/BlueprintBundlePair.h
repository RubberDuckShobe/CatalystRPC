//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundlePair.h
// Created: Wed Mar 10 19:08:28 2021
//

#ifndef FBGEN_BlueprintBundlePair_H
#define FBGEN_BlueprintBundlePair_H

#include "BlueprintBundleReference.h"
#include "Blueprint.h"
struct BlueprintBundlePair
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B4EB0;
	}
	BlueprintBundleReference m_BlueprintBundleRef; // 0x0
	Blueprint* m_Blueprint; // 0x38
	bool m_IsBundled; // 0x40
	bool m_IsValid; // 0x41
	unsigned char _0x42[0x6];
}; // size = 0x48

#endif // FBGEN_BlueprintBundlePair_H
