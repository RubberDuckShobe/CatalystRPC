//
// Generated with FrostbiteGen by Chod
// File: SDK\EdgeModelComponentData.h
// Created: Wed Mar 10 19:07:04 2021
//

#ifndef FBGEN_EdgeModelComponentData_H
#define FBGEN_EdgeModelComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class EdgeModelComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D70E0;
	}
	Array<RigidBodyData*> m_RigidBodies; // 0x70
	Array<RigidMeshAsset*> m_RigidMeshes; // 0x78
	Array<LinearTransform> m_InstanceTransforms; // 0x80
	Array<unsigned short> m_MeshInstanceRanges; // 0x88
	Array<unsigned short> m_ConnectionInstanceLookupTable; // 0x90
	Array<EdgeModelConnectionInfo> m_Connections; // 0x98
	Array<unsigned short> m_PartConnectionRanges; // 0xa0
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_EdgeModelComponentData_H
