//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicModelEntityData.h
// Created: Wed Mar 10 19:07:05 2021
//

#ifndef FBGEN_DynamicModelEntityData_H
#define FBGEN_DynamicModelEntityData_H

#include "MeshAsset.h"
#include "DynamicGamePhysicsEntityData.h"

class DynamicModelEntityData :
	public DynamicGamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142811220;
	}
	MeshAsset* m_Mesh; // 0x90
	unsigned int m_DestructiblePartCount; // 0x98
	bool m_NoCollision; // 0x9c
	unsigned char _0x9d[0x3];
}; // size = 0xa0

#endif // FBGEN_DynamicModelEntityData_H
