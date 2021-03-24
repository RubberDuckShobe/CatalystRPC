//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapBridgeNode.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamMapBridgeNode_H
#define FBGEN_PamMapBridgeNode_H

#include "Vec3.h"
#include "PamMapDistrictPartEntityData.h"
#include "PamMapBridgeNodeType.h"
struct PamMapBridgeNode
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880310;
	}
	Vec3 m_start; // 0x0
	Vec3 m_end; // 0x10
	PamMapDistrictPartEntityData* m_startDistrict; // 0x20
	PamMapDistrictPartEntityData* m_endDistrict; // 0x28
	PamMapBridgeNodeType m_type; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_PamMapBridgeNode_H
