//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshLodGroup.h
// Created: Wed Mar 10 19:05:55 2021
//

#ifndef FBGEN_MeshLodGroup_H
#define FBGEN_MeshLodGroup_H

#include "Asset.h"

class MeshLodGroup :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834610;
	}
	float m_Lod1Distance; // 0x18
	float m_Lod2Distance; // 0x1c
	float m_Lod3Distance; // 0x20
	float m_Lod4Distance; // 0x24
	float m_Lod5Distance; // 0x28
	float m_Lod6Distance; // 0x2c
	float m_ShadowDistance; // 0x30
	float m_CullScreenArea; // 0x34
	const char* m_RuntimeShortName; // 0x38
}; // size = 0x40

#endif // FBGEN_MeshLodGroup_H
