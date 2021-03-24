//
// Generated with FrostbiteGen by Chod
// File: SDK\BlueprintBundleReference.h
// Created: Wed Mar 10 19:08:28 2021
//

#ifndef FBGEN_BlueprintBundleReference_H
#define FBGEN_BlueprintBundleReference_H

#include "BlueprintBundleSettings.h"
#include "Array.h"
struct BlueprintBundleReference
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815E60;
	}
	const char* m_Name; // 0x0
	BlueprintBundleSettings m_Settings; // 0x8
	Array<SharedBundleReference> m_Parents; // 0x28
	bool m_ContainsControllable; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_BlueprintBundleReference_H
