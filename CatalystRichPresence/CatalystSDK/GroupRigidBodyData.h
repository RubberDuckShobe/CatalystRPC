//
// Generated with FrostbiteGen by Chod
// File: SDK\GroupRigidBodyData.h
// Created: Wed Mar 10 19:06:36 2021
//

#ifndef FBGEN_GroupRigidBodyData_H
#define FBGEN_GroupRigidBodyData_H

#include "Array.h"
#include "RigidBodyData.h"

class GroupRigidBodyData :
	public RigidBodyData // size = 0x120
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F530;
	}
	Array<MaterialIndicesLookup> m_RaycastMaterialIndicesLookups; // 0x120
	unsigned char _0x128[0x8];
}; // size = 0x130

#endif // FBGEN_GroupRigidBodyData_H
