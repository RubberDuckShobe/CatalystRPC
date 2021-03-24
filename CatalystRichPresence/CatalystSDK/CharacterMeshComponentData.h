//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterMeshComponentData.h
// Created: Wed Mar 10 19:08:16 2021
//

#ifndef FBGEN_CharacterMeshComponentData_H
#define FBGEN_CharacterMeshComponentData_H

#include "MeshAsset.h"
#include "GameComponentData.h"

class CharacterMeshComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816620;
	}
	MeshAsset* m_Mesh; // 0x70
	bool m_UpdateAnimationTransform; // 0x78
	unsigned char _0x79[0x7];
}; // size = 0x80

#endif // FBGEN_CharacterMeshComponentData_H
