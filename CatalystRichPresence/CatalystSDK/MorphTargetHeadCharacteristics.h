//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphTargetHeadCharacteristics.h
// Created: Wed Mar 10 19:05:46 2021
//

#ifndef FBGEN_MorphTargetHeadCharacteristics_H
#define FBGEN_MorphTargetHeadCharacteristics_H

#include "BlueprintBundleReference.h"
#include "Array.h"
struct MorphTargetHeadCharacteristics
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428257D0;
	}
	BlueprintBundleReference m_HeadBundle; // 0x0
	Array<BlueprintBundleReference> m_HairMeshBundles; // 0x38
	Array<BlueprintBundleReference> m_BeardMeshBundles; // 0x40
}; // size = 0x48

#endif // FBGEN_MorphTargetHeadCharacteristics_H
