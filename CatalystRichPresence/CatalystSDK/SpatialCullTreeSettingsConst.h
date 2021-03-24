//
// Generated with FrostbiteGen by Chod
// File: SDK\SpatialCullTreeSettingsConst.h
// Created: Wed Mar 10 19:01:06 2021
//

#ifndef FBGEN_SpatialCullTreeSettingsConst_H
#define FBGEN_SpatialCullTreeSettingsConst_H

#include "DataContainer.h"

class SpatialCullTreeSettingsConst :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428400F0;
	}
	float m_MinCullArea; // 0x10
	float m_MaxCullArea; // 0x14
	float m_CullAreaScale; // 0x18
	float m_RootSize; // 0x1c
	unsigned int m_MaxTreeDepth; // 0x20
	unsigned int m_MinNodeSplitCount; // 0x24
	unsigned int m_MaxNodeMergeCount; // 0x28
	unsigned int m_CullDistanceMethod; // 0x2c
	float m_MissingExtrusionLength; // 0x30
	bool m_PrecomputedExtrusionEnabled; // 0x34
	bool m_PrecomputedOcclusionEnabled; // 0x35
	unsigned char _0x36[0x2];
}; // size = 0x38

#endif // FBGEN_SpatialCullTreeSettingsConst_H
